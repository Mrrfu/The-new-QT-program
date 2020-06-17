#include "error.h"
#include "ui_error.h"

error::error(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::error)
{
    ui->setupUi(this);
}

error::~error()
{
    delete ui;
}

void error::on_btn_cancel_clicked()
{
    close();
}

void error::on_btn_sure_clicked()
{
   close();
}
