#ifndef TIXING_H
#define TIXING_H

#include <QDialog>

namespace Ui {
class tixing;
}

class tixing : public QDialog
{
    Q_OBJECT

public:
    explicit tixing(QWidget *parent = nullptr);
    ~tixing();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tixing *ui;
};

#endif // TIXING_H
