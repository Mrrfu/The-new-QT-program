#include "qingchu.h"
#include "ui_qingchu.h"
#include"shangye.h"
qingchu::qingchu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qingchu)
{
    ui->setupUi(this);
    m_parent=static_cast<shangye*>(parent);
    setWindowTitle("警告");
}

qingchu::~qingchu()
{
    delete ui;
}

void qingchu::on_pushButton_2_clicked()
{
    close();
}

void qingchu::on_pushButton_clicked()
{
    m_parent->clear1();//调用清理函数
    close();
}
