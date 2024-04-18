#include "mainwindow.h"

#include <QApplication>
#include <RInside.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RInside r_inside(argc,argv);
    MainWindow w;
    w.show();
    return a.exec();
}
