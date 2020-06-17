#ifndef SHANGYE_H
#define SHANGYE_H

#include <QMainWindow>
#include<QString>
#include"benjin.h"
#include"benjin2.h"
#include"error.h"
#include"benxi.h"
#include"benxi2.h"
#include"qingchu.h"
#include"tixing.h"
#include<QSound>
namespace Ui {
class shangye;
}

class shangye : public QMainWindow
{
    Q_OBJECT

public:
    explicit shangye(QWidget *parent = nullptr);
    ~shangye();
    int tese(QString res);
    void clear1();

private slots:
    void on_btn1_clicked();

    void on_lineEdit_01_editingFinished();

    void on_lineEdit_02_editingFinished();

    void on_lineEdit_03_editingFinished();

    void on_lineEdit_04_editingFinished();

    void on_lineEdit_05_editingFinished();

    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();
    void on_comboBox_1_currentTextChanged(const QString &arg1);

private:
    Ui::shangye *ui;
    int area1,price1,years;
    float chengshu1;
    float t;//测试用
    float zonge1;
    double lilv1;
   int panduan;
    benjin *benjin11;
    benjin2 *benjin22;//等额本金下输入总贷款额
    benxi *benxi11;
    benxi2 *benxi22;
    error *e;
    qingchu *a;
    tixing *b;
};

#endif // SHANGYE_H
