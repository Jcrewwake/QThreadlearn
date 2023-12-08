#include <iostream>
#include <QThread>
#include <QtTest/QTest>
#include <QApplication>
#include "controller.h"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Controller* w = new Controller;
    emit w->operate("");
    cout << "Hello World!" << endl;
    return a.exec();
}
