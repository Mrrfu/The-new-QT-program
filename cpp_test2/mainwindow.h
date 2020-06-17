#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<shangye.h>
#include<zuhe.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_btn_1_clicked();

    void on_btn_2_clicked();



private:
    Ui::MainWindow *ui;
     shangye *b;
     zuhe * c;

};
#endif // MAINWINDOW_H
