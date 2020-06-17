#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("房贷计算器");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btn_1_clicked()
{
    b=new shangye;
    b->show();
    qDebug()<<"选择了商业贷款或者公积金贷款计算";
}

void MainWindow::on_btn_2_clicked()
{
    c=new zuhe;
    c->show();
    qDebug()<<"选择了组合型贷款";
}

