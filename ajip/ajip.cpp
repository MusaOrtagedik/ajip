#include "ajip.h"
#include "ui_ajip.h"

ajip::ajip(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ajip)
{
    ui->setupUi(this);
    ui->btnKur->setEnabled(false);
    ui->btnEklentiYukle->setEnabled(false);
    ui->tbSekmeler->setCurrentIndex(0);
    process = new QProcess(this);
    connect (process, SIGNAL(readyReadStandardOutput()), this, SLOT(readStandardOut()));
    connect (process, SIGNAL(readyReadStandardError()), this, SLOT(readStandardError()));
}

ajip::~ajip()
{
    delete ui;
}

void ajip::on_btnSec_clicked()
{
    QFileDialog *fd = new QFileDialog(this, QString::fromUtf8("Dosya Seç"),  QDir::homePath());
    fd->setFileMode(QFileDialog::ExistingFile);

    dosyaYolu = fd->getOpenFileName(this,
        tr("Java Arsivi Sec"), QDir::homePath(), tr("Arsiv Dosyalari (*.tar.gz)"));
    ui->txtDosyaYolu->setText(dosyaYolu);
    dosyaAdi = QDir(dosyaYolu).dirName();
    ui->txtDosyaAdi->setText(dosyaAdi);
    QStringList query = dosyaAdi.split("-");
    javaTipi = query.at(0);
    QStringList query2 = query.at(3).split(".");
    islemciTipi = query2.at(0);
    QStringList surum = query.at(1).split("u");
    klasorAdi = javaTipi + "1." + surum.at(0) + ".0_" + surum.at(1);
    ui->txtKlasorAdi->setText(klasorAdi);
    if(islemciTipi == "x64")
        ui->txtDosyaUyumlulugu->setText("64 Bit");
    else if(islemciTipi == "i586")
        ui->txtDosyaUyumlulugu->setText("32_64 Bit");
    if(javaTipi == "jdk")
        ui->txtJavaTipi->setText("Java SE Development Kit");
    else if(javaTipi == "jre")
        ui->txtJavaTipi->setText("Java SE Runtime Environment");
    ui->btnKur->setEnabled(true);
}

void ajip::on_btnKur_clicked()
{
    klasorAdi = ui->txtKlasorAdi->text();
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("Kurulum adımlarının bitmesini bekleyiniz...\n"));
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("tar xzf " + dosyaYolu + " -C " + JavaHome);
    process->start("tar xzf " + dosyaYolu + " -C " + JavaHome);
    process->waitForFinished();
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("update-alternatives --remove-all java\n");
    process->start("update-alternatives --remove-all java");
    process->waitForFinished();
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --remove-all javac\n");
        process->start("update-alternatives --remove-all javac");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --remove-all jar\n");
        process->start("update-alternatives --remove-all jar");
        process->waitForFinished();
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("update-alternatives --remove-all javaws\n");
    process->start("update-alternatives --remove-all javaws");
    process->waitForFinished();
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/java java /usr/lib/jvm/" + klasorAdi + "/bin/java 1081\n");
    process->start("update-alternatives --install /usr/bin/java java /usr/lib/jvm/" + klasorAdi + "/bin/java 1081");
    process->waitForFinished();
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/" + klasorAdi + "/bin/javac 1081\n");
        process->start("update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/" + klasorAdi + "/bin/javac 1081");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/jar jar /usr/lib/jvm/" + klasorAdi + "/bin/jar 1081\n");
        process->start("update-alternatives --install /usr/bin/jar jar /usr/lib/jvm/" + klasorAdi + "/bin/jar 1081");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/jre/bin/javaws 1081\n");
        process->start("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/jre/bin/javaws 1081");
        process->waitForFinished();
    }
    else if(javaTipi == "jre")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/bin/javaws 1081\n");
        process->start("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/bin/javaws 1081");
        process->waitForFinished();
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("export JAVA_HOME=/usr/lib/jvm/" + klasorAdi + "/\n");
    process->start("export JAVA_HOME=/usr/lib/jvm/" + klasorAdi + "/");
    process->waitForFinished();
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/jre/\n");
        process->start("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/jre/");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/jre/bin\n");
        process->start("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/jre/bin");
        process->waitForFinished();
    }
    else if(javaTipi == "jre")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/\n");
        process->start("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/bin\n");
        process->start("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/bin");
        process->waitForFinished();
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list java\n"));
    process->start("update-alternatives --list java");
    process->waitForFinished();
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list javac\n"));
        process->start("update-alternatives --list javac");
        process->waitForFinished();
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list jar\n"));
        process->start("update-alternatives --list jar");
        process->waitForFinished();
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list javaws\n"));
    process->start("update-alternatives --list javaws");
    process->waitForFinished();
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("İşlemler tamamlandı.\nFirefox tarayıcıya Java eklentisi yüklemek için 'Eklenti Yükle' butonunu tıklayınız."));
    ui->btnEklentiYukle->setEnabled(true);
}

void ajip::on_btnKapat_clicked()
{
    close();
}

void ajip::readStandardOut()
{
    ui->txtCommandLine->append(QString::fromUtf8(process->readAllStandardOutput()));  // read normal output
}

void ajip::readStandardError()
{
    ui->txtCommandLine->append(QString::fromUtf8(process->readAllStandardError()));  // read error output
}

void ajip::on_btnEklentiYukle_clicked()
{
    if(javaTipi == "jdk")
    {
        if(islemciTipi == "x64")
        {
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("ln -s /usr/lib/jvm/" + klasorAdi + "/jre/lib/amd64/libnpjp2.so /usr/lib/mozilla/plugins\n");
            process->start("ln -s /usr/lib/jvm/" + klasorAdi + "/jre/lib/amd64/libnpjp2.so /usr/lib/mozilla/plugins");
            process->waitForFinished();
        }
        else if(islemciTipi == "i586")
        {
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("ln -s /usr/lib/jvm/" + klasorAdi + "/jre/lib/i386/libnpjp2.so /usr/lib/mozilla/plugins\n");
            process->start("ln -s /usr/lib/jvm/" + klasorAdi + "/jre/lib/i386/libnpjp2.so /usr/lib/mozilla/plugins");
            process->waitForFinished();
        }
    }
    else if(javaTipi == "jre")
    {
        if(islemciTipi == "x64")
        {
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("ln -s /usr/lib/jvm/" + klasorAdi + "/lib/amd64/libnpjp2.so /usr/lib/mozilla/plugins\n");
            process->start("ln -s /usr/lib/jvm/" + klasorAdi + "/lib/amd64/libnpjp2.so /usr/lib/mozilla/plugins");
            process->waitForFinished();
        }
        else if(islemciTipi == "i586")
        {
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("ln -s /usr/lib/jvm/" + klasorAdi + "/lib/i386/libnpjp2.so /usr/lib/mozilla/plugins\n");
            process->start("ln -s /usr/lib/jvm/" + klasorAdi + "/lib/i386/libnpjp2.so /usr/lib/mozilla/plugins");
            process->waitForFinished();
        }
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("Lütfen yönetici olarak açmış olduğunuz bir dosya yönetici ile '/usr/lib/mozilla/plugins' dizininde 'libnpjp2.so' dosyası haricinde bulunan java dosyasını siliniz.\n"));
}
