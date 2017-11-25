#include "ajip.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ajip w;
    w.show();

    return a.exec();
}
