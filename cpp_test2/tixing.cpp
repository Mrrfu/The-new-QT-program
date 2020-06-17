#include "tixing.h"
#include "ui_tixing.h"

tixing::tixing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tixing)
{
    ui->setupUi(this);
    setWindowTitle("错误");
}

tixing::~tixing()
{
    delete ui;
}

void tixing::on_pushButton_clicked()
{
    close();
}
