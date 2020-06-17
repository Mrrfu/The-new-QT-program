#ifndef ZUHECLEAR_H
#define ZUHECLEAR_H

#include <QDialog>

class zuhe;
namespace Ui {
class zuheclear;
}

class zuheclear : public QDialog
{
    Q_OBJECT

public:
    explicit zuheclear(QWidget *parent = nullptr);
    ~zuheclear();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::zuheclear *ui;
    zuhe *m1_parent;
};

#endif // ZUHECLEAR_H
