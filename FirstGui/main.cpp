#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);     //code for gui has to be written between this line and a.exec()
    MainWindow w;
    w.show();

    return a.exec();
}
