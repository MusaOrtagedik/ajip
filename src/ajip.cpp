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

    if(!dosyaYolu.isEmpty()&& !dosyaYolu.isNull()){
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
}

void ajip::on_btnKur_clicked()
{
    ui->pbarDurum->setValue(1);
    klasorAdi = ui->txtKlasorAdi->text();
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("Kurulum adımlarının bitmesini bekleyiniz...\n"));
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("tar xzf " + dosyaYolu + " -C " + JavaHome);
    ui->lblDurum->setText(QString::fromUtf8("Java dosyaları /usr/lib/jvm/ adresine ayıklanıyor..."));
    process->start("tar xzf " + dosyaYolu + " -C " + JavaHome);
    process->waitForFinished();
    ui->pbarDurum->setValue(30);
    Gecikme(200);
    if(ui->chkEskiSurumKaldirma->isChecked() == false)
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --remove-all java\n");
        ui->lblDurum->setText(QString::fromUtf8("Kurulu java sürümleri kaldırılıyor..."));
        process->start("update-alternatives --remove-all java");
        process->waitForFinished();
        ui->pbarDurum->setValue(35);
        Gecikme(150);
        if(javaTipi == "jdk")
        {
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("update-alternatives --remove-all javac\n");
            ui->lblDurum->setText(QString::fromUtf8("Kurulu javac sürümleri kaldırılıyor..."));
            process->start("update-alternatives --remove-all javac");
            process->waitForFinished();
            ui->pbarDurum->setValue(40);
            Gecikme(100);
            ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
            ui->txtCommandLine->insertPlainText("update-alternatives --remove-all jar\n");
            ui->lblDurum->setText(QString::fromUtf8("Kurulu jar sürümleri kaldırılıyor..."));
            process->start("update-alternatives --remove-all jar");
            process->waitForFinished();
            ui->pbarDurum->setValue(45);
            Gecikme(100);
        }
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --remove-all javaws\n");
        ui->lblDurum->setText(QString::fromUtf8("Kurulu javaws sürümleri kaldırılıyor..."));
        process->start("update-alternatives --remove-all javaws");
        process->waitForFinished();
    }
    ui->pbarDurum->setValue(50);
    Gecikme(100);
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/java java /usr/lib/jvm/" + klasorAdi + "/bin/java 1081\n");
    ui->lblDurum->setText(QString::fromUtf8("Yeni java sürümü kuruluyor..."));
    process->start("update-alternatives --install /usr/bin/java java /usr/lib/jvm/" + klasorAdi + "/bin/java 1081");
    process->waitForFinished();
    ui->pbarDurum->setValue(55);
    Gecikme(100);
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/" + klasorAdi + "/bin/javac 1081\n");
        ui->lblDurum->setText(QString::fromUtf8("Yeni javac sürümü kuruluyor..."));
        process->start("update-alternatives --install /usr/bin/javac javac /usr/lib/jvm/" + klasorAdi + "/bin/javac 1081");
        process->waitForFinished();
        ui->pbarDurum->setValue(60);
        Gecikme(100);
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/jar jar /usr/lib/jvm/" + klasorAdi + "/bin/jar 1081\n");
        ui->lblDurum->setText(QString::fromUtf8("Yeni jar sürümü kuruluyor..."));
        process->start("update-alternatives --install /usr/bin/jar jar /usr/lib/jvm/" + klasorAdi + "/bin/jar 1081");
        process->waitForFinished();
        ui->pbarDurum->setValue(65);
        Gecikme(100);
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/jre/bin/javaws 1081\n");
        ui->lblDurum->setText(QString::fromUtf8("Yeni javaws sürümü kuruluyor..."));
        process->start("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/jre/bin/javaws 1081");
        process->waitForFinished();
        ui->pbarDurum->setValue(70);
        Gecikme(100);
    }
    else if(javaTipi == "jre")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/bin/javaws 1081\n");
        ui->lblDurum->setText(QString::fromUtf8("Yeni javaws sürümü kuruluyor..."));
        process->start("update-alternatives --install /usr/bin/javaws javaws /usr/lib/jvm/" + klasorAdi + "/bin/javaws 1081");
        process->waitForFinished();
        ui->pbarDurum->setValue(75);
        Gecikme(100);
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText("export JAVA_HOME=/usr/lib/jvm/" + klasorAdi + "/\n");
    ui->lblDurum->setText(QString::fromUtf8("Java home klasörü ayarlanıyor..."));
    process->start("export JAVA_HOME=/usr/lib/jvm/" + klasorAdi + "/");
    process->waitForFinished();
    ui->pbarDurum->setValue(80);
    Gecikme(100);
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/jre/\n");
        ui->lblDurum->setText(QString::fromUtf8("Jre home klasörü ayarlanıyor..."));
        process->start("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/jre/");
        process->waitForFinished();
        ui->pbarDurum->setValue(85);
        Gecikme(100);
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/jre/bin\n");
        ui->lblDurum->setText(QString::fromUtf8("Java adreslemeleri ayarlanıyor..."));
        process->start("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/jre/bin");
        process->waitForFinished();
        ui->pbarDurum->setValue(92);
        Gecikme(100);
    }
    else if(javaTipi == "jre")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/\n");
        ui->lblDurum->setText(QString::fromUtf8("Jre home klasörü ayarlanıyor..."));
        process->start("export JRE_HOME=/usr/lib/jvm/" + klasorAdi + "/");
        process->waitForFinished();
        ui->pbarDurum->setValue(85);
        Gecikme(100);
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/bin\n");
        ui->lblDurum->setText(QString::fromUtf8("Java adreslemeleri ayarlanıyor..."));
        process->start("export PATH=$PATH:/usr/lib/jvm/" + klasorAdi + "/bin:/usr/lib/jvm/" + klasorAdi + "/bin");
        process->waitForFinished();
        ui->pbarDurum->setValue(92);
        Gecikme(100);
    }
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list java\n"));
    ui->lblDurum->setText(QString::fromUtf8("Java kurulu sürümler listeleniyor..."));
    process->start("update-alternatives --list java");
    process->waitForFinished();
    ui->pbarDurum->setValue(94);
    Gecikme(50);
    if(javaTipi == "jdk")
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list javac\n"));
        ui->lblDurum->setText(QString::fromUtf8("Javac kurulu sürümler listeleniyor..."));
        process->start("update-alternatives --list javac");
        process->waitForFinished();
        ui->pbarDurum->setValue(96);
        Gecikme(50);
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list jar\n"));
        ui->lblDurum->setText(QString::fromUtf8("Jar kurulu sürümler listeleniyor..."));
        process->start("update-alternatives --list jar");
        process->waitForFinished();
        ui->pbarDurum->setValue(98);
        Gecikme(50);
    }
    else
        ui->pbarDurum->setValue(98);
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --list javaws\n"));
    ui->lblDurum->setText(QString::fromUtf8("Javaws kurulu sürümler listeleniyor..."));
    process->start("update-alternatives --list javaws");
    process->waitForFinished();
    ui->pbarDurum->setValue(100);
    Gecikme(50);
    ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
    ui->txtCommandLine->insertPlainText(QString::fromUtf8("İşlemler tamamlandı.\nFirefox tarayıcıya Java eklentisi yüklemek için 'Eklenti Yükle' butonunu tıklayınız."));
    ui->btnEklentiYukle->setEnabled(true);
    if(ui->chkEskiSurumKaldirma->isChecked() == true)
    {
        ui->txtCommandLine->insertPlainText("\n-------------------------------------------------------------------------------------------------------\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Eski java sürümleri kaldırılmadığı için alternatif güncellemeler otomatik yapılmadı."));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Bir uçbirim açarak sırasıyla aşağıdaki kodları yazınız. Kodları tek tek çalıştırınız.\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("jdk yüklemişseniz;\n"));
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/java java " + JavaHome + "/" + klasorAdi + "/bin/java 100\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javac javac " + JavaHome + "/" + klasorAdi + "/bin/javac 100\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/jar jar " + JavaHome + "/" + klasorAdi + "/bin/jar 100\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws " + JavaHome + "/" + klasorAdi + "/jre/bin/javaws 100\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("jre yüklemişseniz;\n"));
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/java java " + JavaHome + "/" + klasorAdi + "/bin/java 100\n");
        ui->txtCommandLine->insertPlainText("update-alternatives --install /usr/bin/javaws javaws " + JavaHome + "/" + klasorAdi + "/bin/javaws 100\n\n");
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Yükleme işleminden sonra aktifleştirmek için aşağıdaki kodları çalıştırınız."));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Bu kodlar çalıştırıldıklarında çıkan seçenekler olacaktır. javac ve jar seçenekleri olmayabilir. Ayrıca daha önceden tamamen javayı kaldırmışsanız hiç birinde hiç bir seçenek çıkmayabilir. Otomatik yüklenmiş olur."));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Seçenekler çıkmışsa yeni yüklemiş olduğunuz java adresinin klasör yolunu takip ederek karşısında bulunan en sol taraftaki sıra numarasını klavyeden tuşlayarak yeni java sürümünü sistemden aktif edebilirsiniz.\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Önemli Not : Örnek; java yapılandırmasını tamamlamak için ilk kodu çalıştırdık fakat bir uyarıyla karşılaştık; java bağ grubunda (/usr/bin/java alternatifini sağlayan) sadece bir alternatif var : java_yolu (java_yolu: sizin java adresiniz)"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Bu durumda java yüklenmiş ve tanımlanmış demektir. Problemsiz çalışabilir. Bir sonraki adıma geçebilirsiniz.\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("jdk yüklemişseniz;\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config java"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config javac"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config jar"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config javaws\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("jre yüklemişseniz;\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config java"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("update-alternatives --config javaws\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("Bu işlemler tamamlandıktan sonra son adıma geçiniz.\n\n"));
        ui->txtCommandLine->insertPlainText(QString::fromUtf8("JAVA_HOME, JRE_HOME ve PATH=$PATH: seçenekleri için bu işlem takibi kutucuğunun üst sıralarında nasıl değiştirildiği hakkında örnek bulabilirsiniz.\n"));
    }
    ui->lblDurum->setText(QString::fromUtf8("Kurulum tamamlandı."));
}

void ajip::on_btnKapat_clicked()
{
    close();
}

void ajip::readStandardOut()
{
    ui->txtCommandLine->append(QString::fromUtf8(process->readAllStandardOutput()));
}

void ajip::readStandardError()
{
    ui->txtCommandLine->append(QString::fromUtf8(process->readAllStandardError()));
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

void ajip::Gecikme(int msecs)
{
    QEventLoop eventLoop;
    QTimer::singleShot(10 * msecs, &eventLoop, SLOT(quit()));
    eventLoop.exec();
}
