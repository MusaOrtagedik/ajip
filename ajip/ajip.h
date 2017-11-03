#ifndef AJIP_H
#define AJIP_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QFileInfo>
#include <QProcess>
#include <QDirIterator>
#include <QThread>
#include <QWidget>
#include <stdio.h>
#include <QDebug>

namespace Ui {
class ajip;
}

class ajip : public QMainWindow
{
    Q_OBJECT
    QString dosyaYolu, dosyaAdi, klasorAdi, klasorler, gecici, javaTipi, islemciTipi;
    const QString JavaHome = "/usr/lib/jvm";
    qint8 sayac = 0;
    QProcess *process;

public:
    explicit ajip(QWidget *parent = 0);
    ~ajip();

private slots:
    void readStandardOut();

    void readStandardError();

    void on_btnSec_clicked();

    void on_btnKur_clicked();

    void on_btnKapat_clicked();

    void on_btnEklentiYukle_clicked();

private:
    Ui::ajip *ui;
};

#endif // AJIP_H
