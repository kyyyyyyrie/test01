#include "mainwindow.h"
#include <QApplication>
#include<iostream>
#include<Edge.h>
#include<Node.h>
#include<nodetot.h>
#include<vector>
#include<QTextCodec>
using namespace std;
nodetot total;
int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
