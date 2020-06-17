#include "zuheclear.h"
#include "ui_zuheclear.h"
#include"zuhe.h"

zuheclear::zuheclear(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zuheclear)
{
    ui->setupUi(this);
    m1_parent=static_cast<zuhe*>(parent);
    setWindowTitle("警告");
}

zuheclear::~zuheclear()
{
    delete ui;
}

void zuheclear::on_pushButton_2_clicked()
{
    close();
}

void zuheclear::on_pushButton_clicked()
{
    m1_parent->clear3();//调用清理函数
   close();

}
