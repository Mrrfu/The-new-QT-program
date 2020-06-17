#include "zuhe.h"
#include"zuhe1.h"
#include"zuhe2.h"
#include "ui_zuhe.h"
#include<QString>
#include<string>
#include<QDebug>
#include"zuheclear.h"
#include<QSound>
using namespace std;
zuhe::zuhe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zuhe)
{
    ui->setupUi(this);
    zuhe11=new zuhe1;
    zuhe22=new zuhe2;
    test=0;
    setWindowTitle("组合型贷款计算");
}
void zuhe::clear3()//清理数据
{
    ui->lineEdit_01->setText("");
    ui->lineEdit_02->setText("");
    ui->lineEdit_03->setText("");
    ui->lineEdit_04->setText("");
    ui->lineEdit_05->setText("");
    ui->label_yuegong->setText("");
    ui->label_yueshu->setText("");
    ui->label_dijian->setText("");
    ui->label_huankuan->setText("");
    ui->label_zonge->setText("");
    ui->label_lixi->setText("");
}
int zuhe::tese( QString tes)//判断函数，判断输入的内容是否有字母
{
    string t;
    t=tes.toStdString();
    int i,m=0,l;
    l=tes.length();
    for(i=0;i<l;i++)
    {
        if((t[i]>'a'&&t[i]<'z')||(t[i]>'A'&&t[i]<'Z'))
        {
            break;
        }
        m++;
    }
    if(m==l)return 1;
    else
        return 0;
}
zuhe::~zuhe()
{
    delete ui;
}

void zuhe::on_btn_2_clicked()
{
    QSound::play("C:/Windows/Media/Windows Background.wav");//播放声音
  s=new zuheclear(this);
  s->setModal(true);
  s->show();
}

void zuhe::on_lineEdit_01_editingFinished()
{
   QString res;
   res=this->ui->lineEdit_01->text();
   if(tese(res)==1)
   {
    shang1=ui->lineEdit_01->text().toDouble();
    qDebug()<<"商业贷款额"<<shang1<<"万";
   }

   else
   {
       e=new error;
       e->show();
   }
}

void zuhe::on_lineEdit_02_editingFinished()
{
    QString res;
    res=this->ui->lineEdit_02->text();
    if(tese(res)==1)
    {
     gong1=ui->lineEdit_02->text().toDouble();
     qDebug()<<"公积金贷款额"<<gong1<<"万";
    }
    else
    {
        ui->lineEdit_02->setText("");
        e=new error;
        e->show();
    }
}

void zuhe::on_lineEdit_03_editingFinished()
{
    double te;
    te=this->ui->lineEdit_03->text().toDouble();
    if(te<0||te==0||te>10.0)
    {
        ui->lineEdit_03->setText("");
        e=new error;
        e->show();
    }
    else
    shangli1=this->ui->lineEdit_03->text().toDouble();
    qDebug()<<"商贷利率"<<shangli1<<"%";
}

void zuhe::on_lineEdit_04_editingFinished()
{
    double te;
    te=this->ui->lineEdit_04->text().toDouble();
    if(te<0||te==0||te>10.0)
    {
        ui->lineEdit_04->setText("");
        e=new error;
        e->show();
    }
    else
    gongli1=this->ui->lineEdit_04->text().toDouble();
     qDebug()<<"公积金利率"<<gongli1<<"%";
}

void zuhe::on_lineEdit_05_editingFinished()
{
    QString res;
    double x;
    res=this->ui->lineEdit_05->text();
    if(res=="")
    {
        ui->lineEdit_05->setText("");
        e=new error;
        e->show();
    }
    else
    {
    x=this->ui->lineEdit_05->text().toDouble();
    if(x!=(int)x)
    {
         ui->lineEdit_05->setText("");
        e=new error;
        e->show();
    }
    else
    year1=this->ui->lineEdit_05->text().toInt();
    }
    qDebug()<<"贷款年限"<<year1<<"年";
}

void zuhe::on_radioButton_1_clicked()
{
    test=1;
    qDebug()<<"选择了等额本金";
}

void zuhe::on_radioButton_2_clicked()
{
    qDebug()<<"选择了等额本息";
    test=2;
}


void zuhe::on_btn_1_clicked()
{
    int dijian1,yuegong11,zonge,huankuanzonge1,months,zonglixi1;
    if(test==0)//弹出警告
    {
        QSound::play("C:/Windows/Media/Windows Background.wav");
        b=new tixing;
        b->show();
    }
    if(test==1)//进行等额本金计算
    {
        zuhe11->setgong(gong1);
        zuhe11->setyear(year1);
        zuhe11->setshang(shang1);
        zuhe11->setgongli(gongli1);
        zuhe11->setshangli(shangli1);
        months=zuhe11->returnyear();
        yuegong11=zuhe11->yuegong();
        zonge=zuhe11->daikuanzonge();
        zonglixi1=zuhe11->zonglixi();
        huankuanzonge1=zuhe11->huankuanzonge();
        dijian1=zuhe11->dijian();
        ui->label_yuegong->setText(QString::number(yuegong11));
        ui->label_yueshu->setText(QString::number(months));
        ui->label_dijian->setText(QString::number(dijian1));
        ui->label_huankuan->setText(QString::number(huankuanzonge1));
        ui->label_zonge->setText(QString::number(zonge));
        ui->label_lixi->setText(QString::number(zonglixi1));
    }
    if(test==2)//进行等额本息计算
    {
        zuhe22->setgong(gong1);
        zuhe22->setyear(year1);
       zuhe22->setshang(shang1);
        zuhe22->setgongli(gongli1);
        zuhe22->setshangli(shangli1);
        months=zuhe22->returnyear();
        yuegong11=zuhe22->yuegong();
        zonge=zuhe22->daikuanzonge();
        zonglixi1=zuhe22->zonglixi();
        huankuanzonge1=zuhe22->huankuanzonge();
        ui->label_yuegong->setText(QString::number(yuegong11));
        ui->label_yueshu->setText(QString::number(months));
        ui->label_dijian->setText("无");
        ui->label_huankuan->setText(QString::number(huankuanzonge1));
        ui->label_zonge->setText(QString::number(zonge));
        ui->label_lixi->setText(QString::number(zonglixi1));

    }
}
