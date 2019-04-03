#include "hellodialog.h"
#include "ui_hellodialog.h"
#include <QDebug>
#include <iostream>
#include <cstdio>
using namespace std;

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
    qDebug()<<"start 开始q";
    cout<<"start 开始c"<<endl;
    printf("start 开始p\n");
}

HelloDialog::~HelloDialog()
{
    qDebug()<<"exit 退出q";
    cout<<"exit 退出c"<<endl;
    printf("exit 退出p\n");
    delete ui;
}

void HelloDialog::on_pushButton_clicked()
{
    qDebug()<<"clear 清空q";
    cout<<"clear 清空c"<<endl;
    printf("clear 清空p\n");
}

void HelloDialog::on_pushButton_2_clicked()
{
    qDebug()<<"edit 修改q";
    cout<<"edit 修改c"<<endl;
    printf("edit 修改p\n");
}
