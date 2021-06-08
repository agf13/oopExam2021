#include "mainwindow.h"

#include <iostream>
#include <fstream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    std::ofstream q("input.txt");

    return a.exec();
}
