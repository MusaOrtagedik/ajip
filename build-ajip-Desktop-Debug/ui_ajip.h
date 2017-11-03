/********************************************************************************
** Form generated from reading UI file 'ajip.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJIP_H
#define UI_AJIP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajip
{
public:
    QWidget *centralWidget;
    QTabWidget *tbSekmeler;
    QWidget *tab_3;
    QLabel *label_4;
    QPushButton *btnSec;
    QTextEdit *txtCommandLine;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btnEklentiYukle;
    QLineEdit *txtKlasorAdi;
    QLabel *label_3;
    QLineEdit *txtDosyaYolu;
    QPushButton *btnKur;
    QLineEdit *txtDosyaAdi;
    QPushButton *btnKapat;
    QWidget *tab_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ajip)
    {
        if (ajip->objectName().isEmpty())
            ajip->setObjectName(QString::fromUtf8("ajip"));
        ajip->resize(671, 514);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../media/bilisim/G|Drive Mobile/logo256.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ajip->setWindowIcon(icon);
        centralWidget = new QWidget(ajip);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tbSekmeler = new QTabWidget(centralWidget);
        tbSekmeler->setObjectName(QString::fromUtf8("tbSekmeler"));
        tbSekmeler->setGeometry(QRect(0, 0, 671, 491));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 31, 16));
        btnSec = new QPushButton(tab_3);
        btnSec->setObjectName(QString::fromUtf8("btnSec"));
        btnSec->setGeometry(QRect(280, 50, 90, 23));
        txtCommandLine = new QTextEdit(tab_3);
        txtCommandLine->setObjectName(QString::fromUtf8("txtCommandLine"));
        txtCommandLine->setGeometry(QRect(10, 80, 651, 381));
        txtCommandLine->setReadOnly(true);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 131, 16));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 131, 16));
        btnEklentiYukle = new QPushButton(tab_3);
        btnEklentiYukle->setObjectName(QString::fromUtf8("btnEklentiYukle"));
        btnEklentiYukle->setGeometry(QRect(480, 50, 82, 23));
        txtKlasorAdi = new QLineEdit(tab_3);
        txtKlasorAdi->setObjectName(QString::fromUtf8("txtKlasorAdi"));
        txtKlasorAdi->setGeometry(QRect(560, 20, 101, 23));
        txtKlasorAdi->setReadOnly(true);
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 0, 81, 16));
        txtDosyaYolu = new QLineEdit(tab_3);
        txtDosyaYolu->setObjectName(QString::fromUtf8("txtDosyaYolu"));
        txtDosyaYolu->setGeometry(QRect(200, 20, 351, 23));
        txtDosyaYolu->setReadOnly(true);
        btnKur = new QPushButton(tab_3);
        btnKur->setObjectName(QString::fromUtf8("btnKur"));
        btnKur->setGeometry(QRect(380, 50, 90, 23));
        txtDosyaAdi = new QLineEdit(tab_3);
        txtDosyaAdi->setObjectName(QString::fromUtf8("txtDosyaAdi"));
        txtDosyaAdi->setGeometry(QRect(10, 20, 181, 23));
        txtDosyaAdi->setReadOnly(true);
        btnKapat = new QPushButton(tab_3);
        btnKapat->setObjectName(QString::fromUtf8("btnKapat"));
        btnKapat->setGeometry(QRect(570, 50, 90, 23));
        tbSekmeler->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 160, 641, 301));
        textEdit->setReadOnly(true);
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 611, 151));
        tbSekmeler->addTab(tab_4, QString());
        ajip->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ajip);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ajip->setStatusBar(statusBar);

        retranslateUi(ajip);

        tbSekmeler->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ajip);
    } // setupUi

    void retranslateUi(QMainWindow *ajip)
    {
        ajip->setWindowTitle(QApplication::translate("ajip", "Automatic Java Installer Project", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajip", "v0.2", 0, QApplication::UnicodeUTF8));
        btnSec->setText(QApplication::translate("ajip", "Dosya Se\303\247", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajip", "Se\303\247ilen Dosya Ad\304\261", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajip", "Se\303\247ilen Dosya Yolu", 0, QApplication::UnicodeUTF8));
        btnEklentiYukle->setText(QApplication::translate("ajip", "Eklenti Y\303\274kle", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajip", "Java Klas\303\266r\303\274", 0, QApplication::UnicodeUTF8));
        btnKur->setText(QApplication::translate("ajip", "Kur", 0, QApplication::UnicodeUTF8));
        btnKapat->setText(QApplication::translate("ajip", "Kapat", 0, QApplication::UnicodeUTF8));
        tbSekmeler->setTabText(tbSekmeler->indexOf(tab_3), QApplication::translate("ajip", "Se\303\247 ve Kur", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("ajip", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GNU KISITLI GENEL KAMU L\304\260SANSI</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">S\303\274r\303\274m 3, 29 Haziran 2007</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright \302\251 2007 \303\226zg\303\274r Yaz\304\261l\304\261m Vakf\304\261 &lt;http://fsf.org/&gt;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bu lisans belgesinin tam kopyas\304\261n\304\261n herkes taraf\304\261ndan koplayalanmas\304\261 ve da\304\237\304\261t\304\261m\304\261 serbest olup, de\304\237i\305\237tirilmesi yasakt\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342"
                        "\200\231n\304\261n i\305\237bu s\303\274r\303\274m\303\274, a\305\237a\304\237\304\261daki listede yer alan ek izinlerle eksiklikleri giderilerek GNU Genel Kamu Lisans\304\261\342\200\231n\304\261n 3\342\200\262\303\274nc\303\274 s\303\274r\303\274m\303\274n\303\274n h\303\274k\303\274m ve ko\305\237ullar\304\261n\304\261 kapsamaktad\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0. Ek Tan\304\261mlamalar.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Burada kullan\304\261ld\304\261\304\237\304\261 gibi \342\200\234i\305\237"
                        "bu lisans\342\200\235, GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342\200\231n\304\261n 3\342\200\262\303\274nc\303\274 s\303\274r\303\274m\303\274n\303\274, \342\200\234GNU GKL\342\200\235 de GNU Genel Kamu Lisans\304\261\342\200\231n\304\261n 3\342\200\262\303\274nc\303\274 s\303\274r\303\274m\303\274n\303\274 kasteder.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\234K\303\274t\303\274phane\342\200\235 i\305\237bu lisansla kapsama al\304\261nm\304\261\305\237, a\305\237a\304\237\304\261da tan\304\261mland\304\261\304\237\304\261 gibi bir uygulama veya birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma d\304\261\305\237\304\261ndaki \303\247al\304\261\305\237malar\304\261 kasteder.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bir \342\200\234uygulama\342\200\235 k\303\274t\303\274phane taraf\304\261ndan sa\304\237lanan aray\303\274z\303\274n kulland\304\261\304\237\304\261 her t\303\274rl\303\274 \303\247al\304\261\305\237ma olup, k\303\274t\303\274phaneye ba\305\237ka t\303\274rl\303\274 dayanmayan \303\247al\304\261\305\237mad\304\261r. K\303\274t\303\274phane taraf\304\261ndan tan\304\261mlanan bir s\304\261n\304\261f\304\261n alts\304\261n\304\261f\304\261n\304\261 tan\304\261mlamak, k\303\274t\303\274phane taraf\304\261ndan sa\304\237lanan bir aray\303\274z\303\274 kullanma \305\237ekli olarak varsay\304\261l\304\261r.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\234Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma\342\200\235, bir uygulaman\304\261n k\303\274t\303\274phaneyle birle\305\237mesi ya da ba\304\237lanmas\304\261yla ortaya \303\247\304\261kan \303\247al\304\261\305\237mad\304\261r. Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237mayla yap\304\261lan belirli bir k\303\274t\303\274phane s\303\274r\303\274m\303\274ne ayn\304\261 zamanda \342\200\234ba\304\237lanm\304\261\305\237 s\303\274r\303\274m\342\200\235 ad\304\261 verilir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma i\303\247in \342\200\234En K\303\274\303\247\303\274k \304\260"
                        "lgili Kaynak\342\200\235, di\304\237er durumlardan ayr\304\261 olarak d\303\274\305\237\303\274n\303\274ld\303\274\304\237\303\274nde uygulamaya dayal\304\261 olmayan ve ba\304\237lanm\304\261\305\237 s\303\274r\303\274m olmayan birle\305\237tirilmi\305\237 \303\247al\304\261\305\237man\304\261n par\303\247alar\304\261 i\303\247in herhangi bir kanak kod hari\303\247, birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma i\303\247in ilgili kaynak demektir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma i\303\247in \342\200\234\304\260lgili Uygulama Kodu\342\200\235, uygulamadan yeniden birle\305\237tirilmi\305\237 \303\247al\304\261\305\237ma elde etmek i\303\247in gerekli her t\303\274r veri ve yard\304\261mc\304"
                        "\261 program\304\261 i\303\247eren fakat birle\305\237tirilmi\305\237 \303\247al\304\261\305\237man\304\261n sistem k\303\274t\303\274phanelerini i\303\247ermeyen, uygulama i\303\247in nesne kodu ve/veya kaynak kod demektir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. GNU GKL\342\200\231nin 3\342\200\262\303\274nc\303\274 B\303\266l\303\274m\303\274 \304\260\303\247in \303\226zel Durum.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GNU GKL\342\200\231nin 3\342\200\262\303\274nc\303\274 b\303\266l\303\274m\303\274ne ba\304\237l"
                        "\304\261 olmaks\304\261z\304\261n i\305\237bu lisans\304\261n 3\342\200\262\303\274nc\303\274 ve 4\342\200\262\303\274nc\303\274 b\303\266l\303\274mleri uyar\304\261nca korunmu\305\237 bir \303\247al\304\261\305\237may\304\261 ta\305\237\304\261yabilirsiniz.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. De\304\237i\305\237tirilmi\305\237 S\303\274r\303\274mleri Ta\305\237\304\261mak.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">E\304\237er bir k\303\274t\303\274phaneyi de\304\237i\305\237tirdiyseniz, ve yapt\304\261\304\237\304"
                        "\261n\304\261z de\304\237i\305\237iklikte bir hizmet, bu hizmeti kullanan (hizmet \303\247al\304\261\305\237t\304\261r\304\261ld\304\261\304\237\304\261nda bir arg\303\274man olarak kullanmas\304\261 haricinde) bir uygulama taraf\304\261ndan sa\304\237lanan bir fonksiyona veya veriye dayan\304\261yorsa, de\304\237i\305\237tirilmi\305\237 s\303\274r\303\274m\303\274n bir kopyas\304\261n\304\261 ta\305\237\304\261yabilirsiniz, ancak:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    a) \304\260\305\237bu lisans uyar\304\261nca, uygulaman\304\261n b\303\266yle bir fonksiyon ya da tablo sa\304\237lamad\304\261\304\237\304\261 durumlarda fonksiyonun hala \303\247al\304\261\305\237\304\261r durumda olmas\304\261 ve amac\304\261n\304\261 ger\303\247ekle\305\237tirme do\304\237r"
                        "ultusundaki k\304\261s\304\261mlar\304\261n i\305\237lemesi konusundasamimiyetle \303\247aba harcaman\304\261z ko\305\237uluyla; veya,</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    b) GNU GKL alt\304\261nda, i\305\237bu lisans\304\261n ek izinlerinin hi\303\247biri bahsi ge\303\247en kopyaya uygulanm\304\261yorsa.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. K\303\274t\303\274phane Ba\305\237l\304\261k Dosyalar\304\261ndan Gelen Materyallerle Birle\305\237en Nesne Kodu.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bir uygulamadan gelen nesne kodu k\303\274t\303\274phanenin bir par\303\247as\304\261 olan ba\305\237l\304\261k dosyas\304\261ndan gelen materyalle birle\305\237ebilir. E\304\237er birle\305\237tirilmi\305\237 materyal say\304\261sal de\304\237i\305\237kenler, veri yap\304\261s\304\261 tasar\304\261mlar\304\261 ve eri\305\237imciler, k\303\274\303\247\303\274k makrolar ve k\303\274\303\247\303\274k (on sat\304\261r ya da daha az) sat\304\261r i\303\247i fonksiyonlar\304\261yla s\304\261n\304\261rland\304\261r\304\261lmam\304\261\305\237sa, a\305\237a\304\237\304\261daki iki maddeyi yerine getirmeniz ko\305\237uluyla bu gibi bir nesne kodunu istedi\304\237iniz ko\305\237ullar alt\304\261nda ta\305\237\304\261yabilirsiniz:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a) K\303\274t\303\274phane taraf\304\261ndan kullan\304\261lan ve kullan\304\261m\304\261 i\305\237bu lisans kapsam\304\261nda olan nesne kodunun herbir kopyas\304\261yla birlikte g\303\266ze \303\247arpan bir uyar\304\261 verin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">b)Nesne kodunun yan\304\261na GNU GKL\342\200\231nin ve i\305\237bu lisans belgesinin birer kopyas\304\261n\304\261 ili\305\237tirin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Birle\305\237tirilmi\305\237 \303\207al\304\261\305\237malar.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237man\304\261n i\303\247inde yer alan k\303\274t\303\274phanenin par\303\247alar\304\261n\304\261 de\304\237i\305\237tirmeyi etkili bir \305\237ekilde k\304\261s\304\261tlamad\304\261\304\237\304\261 ve bu t\303\274r de\304\237i\305\237iklikler \303\274zerinde tersine m\303\274hendislik ve hata ay\304\261klama i\305\237lemlerini k\304\261s\304\261tlmad\304\261\304\237\304\261 s\303\274rece, birle\305\237tirilmi\305\237 \303\247al\304\261\305\237may\304\261, a\305"
                        "\237a\304\237\304\261daki maddelerin herbirini yerine getirdi\304\237iniz takdirde istedi\304\237iniz ko\305\237ullar alt\304\261nda ta\305\237\304\261yabilirsiniz:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a) K\303\274t\303\274phane taraf\304\261ndan kullan\304\261lan ve kullan\304\261m\304\261 i\305\237bu lisans kapsam\304\261nda olan birle\305\237tirilmi\305\237 \303\247al\304\261\305\237man\304\261n herbir kopyas\304\261yla birlikte g\303\266ze \303\247arpan bir uyar\304\261 verin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\">b)Birle\305\237tirilmi\305\237 \303\247al\304\261\305\237man\304\261n yan\304\261na GNU GKL\342\200\231nin ve i\305\237bu lisans belgesinin birer kopyas\304\261n\304\261 ili\305\237tirin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">c) \303\207al\304\261\305\237t\304\261\304\237\304\261 s\303\274re boyunca telif hakk\304\261 uyar\304\261s\304\261 g\303\266steren birle\305\237tirilmi\305\237 \303\247al\304\261\305\237malar i\303\247in, kullan\304\261c\304\261y\304\261 GNU GKL ve i\305\237bu lisans belgesinin birer kopyas\304\261na y\303\266nlendiren bir referansla birlikte, bahsi ge\303\247en uyar\304\261lar\304\261n yan\304\261na k\303\274t\303\274phane i\303\247in de bir telif hakk\304\261 uyar\304\261s\304\261 ili\305\237tirin.</p>\n"
"<p style=\"-qt-paragraph-typ"
                        "e:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">d) A\305\237a\304\237\304\261dakilerin birini yap\304\261n:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    0) En k\303\274\303\247\303\274k ilgili kayna\304\237\304\261 i\305\237bu lisans\304\261n h\303\274k\303\274mleri uyar\304\261nca, ve ilgili uygulama kodunu, izin verilen ko\305\237ullar alt\304\261nda, kullan\304\261c\304\261ya de\304\237i\305\237tirilen birle\305\237mi\305\237 \303\247al\304\261\305\237may\304\261 \303\274retmek i\303\247in ba\304\237lanm\304\261\305\237 s\303\274r\303\274m\303\274n de\304\237i\305"
                        "\237tirilmi\305\237 s\303\274r\303\274m\303\274yle uygulamay\304\261 yeniden birle\305\237tirmesi ya da yeniden ba\304\237lamas\304\261 i\303\247in en uygun bi\303\247imde, GNU GKL\342\200\231nin ilgili kayna\304\237\304\261 ta\305\237\304\261maya ili\305\237kin 6\342\200\262nc\304\261 b\303\266l\303\274m\303\274nde belirtildi\304\237i gibi ta\305\237\304\261y\304\261n.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    1) K\303\274t\303\274phaneyle birle\305\237tirmek i\303\247in uygun bir payla\305\237\304\261lm\304\261\305\237 k\303\274t\303\274phane d\303\274zene\304\237i kullan\304\261n. Uygun k\303\274t\303\274phane d\303\274zene\304\237i 1) kullan\304\261m esnas\304\261nda kullan\304\261c\304\261n\304\261n kendi bilgisayar sisteminde var olan k\303\274t\303\274phan"
                        "e kopyas\304\261n\304\261 kullanan, ve 2) ba\304\237lanm\304\261\305\237 s\303\274r\303\274mle aray\303\274z uyumlu olan de\304\237i\305\237tirilmi\305\237 k\303\274t\303\274phane s\303\274r\303\274m\303\274yle d\303\274zg\303\274n \303\247al\304\261\305\237acak d\303\274zenektir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">e) Yaln\304\261zca, aksi halde GNU GPL\342\200\231nin 6\342\200\262nc\304\261 b\303\266l\303\274m\303\274 alt\304\261nda b\303\266yle bir bilgi vermeniz gerekecekse, ve b\303\266yle bir bilgi uygulaman\304\261n de\304\237i\305\237tirilen ba\304\237lanm\304\261\305\237 s\303\274r\303\274mle yeniden birle\305\237tirilmesi veya ba\304\237lanmas\304\261yla ortaya \303\247\304\261kan ba\304\237lanm\304\261\305\237 \303\247al\304\261\305\237man\304\261n d"
                        "e\304\237i\305\237tirilmi\305\237 s\303\274r\303\274m\303\274n\303\274 kurmak ve \303\247al\304\261\305\237t\304\261rmak i\303\247in gerekliyse, kurulum bilgisi sa\304\237lay\304\261n. (E\304\237er 4d0 se\303\247ene\304\237ini kulland\304\261ysan\304\261z, kurulum bilgisi en k\303\274\303\247\303\274k ilgili kayna\304\237\304\261 ve ilgili uygulama kodunu da i\303\247ermelidir. E\304\237er 4d1 se\303\247ene\304\237ini kulland\304\261ysan\304\261z, GNU GKL\342\200\231nin ilgili kayna\304\237\304\261 ta\305\237\304\261maya ili\305\237kin 6\342\200\262nc\304\261 b\303\266l\303\274m\303\274nde belirtildi\304\237i \305\237ekilde kurulum bilgisini sa\304\237lamal\304\261s\304\261n\304\261z.)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Birle\305\237tirilmi\305\237 K\303\274"
                        "t\303\274phaneler</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">K\303\274t\303\274phaneye dayal\304\261 bir i\305\237 olarak k\303\274t\303\274phane hizmetlerini, uygulama olmayan ve i\305\237bu lisans kapsam\304\261nda bulunmayan di\304\237er k\303\274t\303\274phane hizmetleriyle birlikte tek bir k\303\274t\303\274phaneye yan yana koyabilir; a\305\237a\304\237\304\261daki iki maddeyi ger\303\247ekle\305\237tirdi\304\237iniz takdirde istedi\304\237iniz ko\305\237ullar alt\304\261nda bu gibi birle\305\237tirilmi\305\237 k\303\274t\303\274phaneleri ta\305\237\304\261yabilirsiniz:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    a) Birle\305\237tirilmi\305\237 k\303\274t\303\274phaneyi di\304\237er k\303\274t\303\274phane hizmetleriyle birle\305\237tirilmemi\305\237, i\305\237u lisans ko\305\237ullar\304\261 alt\304\261nda bulunan, k\303\274t\303\274phaneye dayal\304\261 ayn\304\261 \303\247al\304\261\305\237man\304\261n bir kopyas\304\261yla birlikte bulundurun.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    b) Birle\305\237tirilmi\305\237 k\303\274t\303\274phaneyle birlikte, bu k\303\274t\303\274phanenin bir k\304\261sm\304\261n\304\261n k\303\274t\303\274phaneye dayal\304\261 bir \303\247al\304\261\305\237ma oldu\304\237una ili\305\237kin ve ayn\304\261 \303\247al\304\261\305\237man\304\261n b"
                        "irle\305\237tirilmemi\305\237 halini nereden bulacaklar\304\261n\304\261 a\303\247\304\261klayan g\303\266ze \303\247arpan bir uyar\304\261 verin.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342\200\231n\304\261n De\304\237i\305\237tirilmi\305\237 S\303\274r\303\274mleri.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\303\226zg\303\274r Yaz\304\261l\304\261m Vakf\304\261, GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342\200\231n\304\261n de\304\237i\305\237"
                        "tirilmi\305\237 ve/veya yeni s\303\274r\303\274mlerini zaman zaman yay\304\261mlayabilir. Bu gibi yeni s\303\274r\303\274mler, halihaz\304\261rdaki s\303\274r\303\274mle ayn\304\261 ruhu ta\305\237\304\261makta olup, yeni sorun ve endi\305\237eler konusunda ayr\304\261nt\304\261land\304\261r\304\261lmas\304\261 bak\304\261m\304\261ndan farkl\304\261l\304\261k g\303\266sterebilir.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Her s\303\274r\303\274me ay\304\261rt edici bir s\303\274r\303\274m numaras\304\261 verilir. E\304\237er k\303\274t\303\274phane sizin ald\304\261\304\237\304\261n\304\261z haliyle GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342\200\231n\304\261n baz\304\261 numaral\304\261 s\303\274r\303\274mlerinin ya da \342\200\234daha sonraki herh"
                        "angi bir s\303\274r\303\274m\303\274n\303\274n\342\200\235 ona uyguland\304\261\304\237\304\261n\304\261 belirtiyorsa, yay\304\261mlanan o s\303\274r\303\274m\303\274n ya da \303\226zg\303\274r Yaz\304\261l\304\261m Vakf\304\261 taraf\304\261ndan yay\304\261nlanan daha sonraki bir s\303\274r\303\274m\303\274n h\303\274k\303\274mlerini ve ko\305\237ullar\304\261n\304\261 kabul etme se\303\247ene\304\237iniz mevcuttur. E\304\237er k\303\274t\303\274phane sizin ald\304\261\304\237\304\261n\304\261z haliyle GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261\342\200\231n\304\261n bir s\303\274r\303\274m numaras\304\261n\304\261 belirtmiyorsa, \303\226zg\303\274r Yaz\304\261l\304\261m Vakf\304\261 taraf\304\261ndan yay\304\261mlanan GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261 s\303\274r\303\274mlerinden herhangi birini se\303\247ebilirsiniz.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">E\304\237er k\303\274t\303\274phane sizin ald\304\261\304\237\304\261n\304\261z haliyle ileride hangi GNU K\304\261s\304\261tl\304\261 Genel Kamu Lisans\304\261n\304\261n uygulanaca\304\237\304\261n\304\261 bir vekilin belirleyebilece\304\237ini belirtiyorsa, bu vekilin bir s\303\274r\303\274m\303\274 kabul etti\304\237inin resmi beyanat\304\261, sizi k\303\274t\303\274phane i\303\247in o s\303\274r\303\274m\303\274 se\303\247meye kal\304\261c\304\261 \305\237ekilde yetkilendirir. </p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajip", "<html><head/><body><pre style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">AutomaticJavaInstallerProject v0.2  Copyright (C) 2017  SQSoft Musa Ortagedik</span></pre><pre style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans Mono,monospace'; font-size:small;\"><br/></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">Bu program LGPL lisans\304\261 ile lisanslanm\304\261\305\237t\304\261r.</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">Ayr\304\261nt\304"
                        "\261lar i\303\247in resmi d\303\266k\303\274man;</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">'https://www.gnu.org/licenses/lgpl-3.0.en.html'.</span></pre><pre style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans Mono,monospace'; font-size:small;\"><br/></pre><pre style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">Bu bir \303\266zg\303\274r yaz\304\261l\304\261md\304\261r, ve baz\304\261 ko\305\237ullar alt\304\261nda yeniden da\304\237\304\261tmakta serbestsiniz; </span></pre><pre style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'DejaVu Sans Mono,monospace'; font-size:small;\">ayr\304\261nt\304\261lar i\303\247in 'https://www.gnu.org/licenses/lgpl-3.0.en.html'. </span></pre></body></html>", 0, QApplication::UnicodeUTF8));
        tbSekmeler->setTabText(tbSekmeler->indexOf(tab_4), QApplication::translate("ajip", "Hakk\304\261nda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajip: public Ui_ajip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJIP_H
