#ifndef ZUHE_H
#define ZUHE_H
#include"zuhe1.h"
#include"zuhe2.h"
#include"error.h"
#include"zuheclear.h"
#include <QMainWindow>
#include"tixing.h"

namespace Ui {
class zuhe;
}

class zuhe : public QMainWindow
{
    Q_OBJECT

public:
    explicit zuhe(QWidget *parent = nullptr);
    ~zuhe();
     int tese( QString tes);
    void clear3();
private slots:
    void on_btn_2_clicked();

    void on_lineEdit_01_editingFinished();

    void on_lineEdit_02_editingFinished();

    void on_lineEdit_03_editingFinished();

    void on_lineEdit_04_editingFinished();

    void on_lineEdit_05_editingFinished();

    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_btn_1_clicked();

private:
    Ui::zuhe *ui;
    zuhe1 *zuhe11;
    zuhe2 * zuhe22;
    float shang1,gong1;
    double shangli1,gongli1;
    int year1;
    int test;
    error *e;
    zuheclear *s;
    tixing *b;

};

#endif // ZUHE_H
