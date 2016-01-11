//test the git
#include "mainwindow.h"
#include <QApplication>
#include <stdio>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
