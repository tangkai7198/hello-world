#include "hellodialog.h"
#include <QApplication>
#include <QTextCodec>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QTextCodec *utf8 = QTextCodec::codecForName("utf-8");
//    QTextCodec::setCodecForTr(utf8);
//    QTextCodec::setCodecForLocale(utf8);
    QTextCodec::setCodecForCStrings(utf8);

    QApplication a(argc, argv);
    HelloDialog w;
    w.show();

    qDebug()<<QDir::currentPath();

    return a.exec();
}
