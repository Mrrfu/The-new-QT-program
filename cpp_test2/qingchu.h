#ifndef QINGCHU_H
#define QINGCHU_H

#include <QDialog>
#include"ui_shangye.h"
class shangye;
namespace Ui {
class qingchu;
}

class qingchu : public QDialog
{
    Q_OBJECT

public:
    explicit qingchu(QWidget *parent = nullptr);
    ~qingchu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::qingchu *ui;
    shangye *m_parent;
};

#endif // QINGCHU_H
