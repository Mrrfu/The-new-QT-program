#include "shangye.h"
#include "ui_shangye.h"
#include"benjin.h"
#include"benjin2.h"
#include<QString>
#include"error.h"
#include"benxi2.h"
#include<string>
#include<QDebug>
#include"qingchu.h"
#include<QSound>
using namespace std;
//商业贷款或者公积金贷款计算
shangye::shangye(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shangye)
{
    benjin11 =new benjin;
    benjin22=new benjin2;
    benxi11=new benxi;
    benxi22=new benxi2;
    ui->setupUi(this);
    zonge1=0;
    panduan=0;
    setWindowTitle("商业或公积金贷款计算");
}
shangye::~shangye()
{
    delete ui;
}
int shangye::tese( QString tes)//判断函数，判断输入的内容是否有字母
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
void shangye::clear1()//进行数据的清除
{
   ui->lineEdit_01->setText("");
   ui->lineEdit_02->setText("");
   ui->lineEdit_03->setText("");
   ui->lineEdit_04->setText("");
   ui->lineEdit_05->setText("");
   ui->label_lixi->setText("");
   ui->label_dijian->setText("");
   ui->label_huankuan->setText("");
   ui->label_shoufu->setText("");
   ui->label_yuegong->setText("");
   ui->label_yueshu->setText("");
   ui->label_zonge->setText("");

}
void shangye::on_btn1_clicked()
{
    QSound::play("C:/Windows/Media/Windows Background.wav");//播放声音
    a=new qingchu(this);
    a->setModal(true);
    a->show();
}

void shangye::on_lineEdit_01_editingFinished()
{
     zonge1=0;
    QString res;
    res=this->ui->lineEdit_01->text();
    if(tese(res)==1)
   {
        price1=this->ui->lineEdit_01->text().toInt();//获得每平方米的价格
        qDebug()<<price1<<"元/每平方米";
    }
    else
    {
        this->ui->lineEdit_01->setText("");
        e=new error;
        e->show();
    }
}

void shangye::on_comboBox_1_currentTextChanged(const QString &arg1)
{
    chengshu1=ui->comboBox_1->currentText().toFloat();
    qDebug()<<chengshu1<<"成";
}
void shangye::on_lineEdit_02_editingFinished()
{
    QString res;
    res=this->ui->lineEdit_02->text();
    if(tese(res)==1)
    {
    area1=this->ui->lineEdit_02->text().toInt();//获得面积
    qDebug()<<area1<<"平方米";
    }
    else
    {
        this->ui->lineEdit_02->setText("");
        e=new error;
        e->show();
    }
}

void shangye::on_lineEdit_03_editingFinished()
{
    QString res;
   double res1;
    res=this->ui->lineEdit_03->text();
     res1=res.toDouble();
    if(res=="")
    {
         this->ui->lineEdit_03->setText("");
        e=new error;
        e->show();
    }
    if(res1!=(int)res1)
    {
         this->ui->lineEdit_03->setText("");
        e=new error;
        e->show();
    }
    else
        years=this->ui->lineEdit_03->text().toInt();
    qDebug()<<years<<"年";

}

void shangye::on_lineEdit_04_editingFinished()
{
    double res;
    res=this->ui->lineEdit_04->text().toDouble();
    if(res>=10||res<=0)
    {
         this->ui->lineEdit_04->setText("");
        e=new error;
        e->show();
    }
    else
    lilv1=this->ui->lineEdit_04->text().toDouble();//获得贷款利息
    qDebug()<<lilv1<<"%";
}

void shangye::on_lineEdit_05_editingFinished()
{
    QString res;
    res=ui->lineEdit_05->text();
    if(tese(res)==1)
    {
        zonge1=this->ui->lineEdit_05->text().toFloat();//获得用户直接输入的贷款金额
    qDebug()<<"输入总额"<<zonge1<<"万";
    }
    else
    {
       this->ui->lineEdit_05->setText("");
       e=new error;
       e->show();
    }
}

void shangye::on_radioButton_1_clicked()//等额本金，用于判断用户选择的还款方式
{
    qDebug()<<"选择了等额本金";
    panduan=1;

}

void shangye::on_radioButton_2_clicked()//等额本息，用于判断用户选择的还款方式
{
     qDebug()<<"选择了等额本息";
    panduan=2;

}
void shangye::on_pushButton_clicked()
{
  int shoufu1,lixi1,yuegong11,huankuan1,yueshu1,dijian1;
   int daikuanze;//贷款总额
   if(panduan==0)
   {
       QSound::play("C:/Windows/Media/Windows Background.wav");
       b=new tixing;
       b->show();
   }
    if(panduan==1)
    {//等额本金
        if(zonge1==0)
        {
            benjin11->setm(area1);
             benjin11->setc(chengshu1);//此段是在进行利用面积，价格来计算
            benjin11->setn(years);
            benjin11->setz(lilv1);
            benjin11->sety(price1);
           yueshu1= benjin11->yueshu();
           shoufu1= benjin11->shoufu();
           lixi1= benjin11->lixi();
           huankuan1=benjin11->huankuan();
           dijian1=benjin11->dijian();
           daikuanze= benjin11->daikuan();
           yuegong11= benjin11->yuegong1();
           ui->lineEdit_05->setText("");
           ui->label_lixi->setText(QString::number(lixi1));
           ui->label_dijian->setText(QString::number(dijian1));
           ui->label_huankuan->setText(QString::number(huankuan1));
           ui->label_shoufu->setText(QString::number(shoufu1));
           ui->label_yuegong->setText(QString::number(yuegong11));
           ui->label_yueshu->setText(QString::number(yueshu1));
           ui->label_zonge->setText(QString::number(daikuanze));
           ui->label_shouyue->setText("首月月供:");
            ui->label_now->setText("元");
        }
      else
        {
            //用直接输入的贷款总额进行计算
            benjin22->setlilv(lilv1);
            benjin22->setnian(years);
            benjin22->setzonge(zonge1);
            yueshu1=benjin22->yueshu2();
            huankuan1=benjin22->huankuan();
            lixi1=benjin22->lixi();
            dijian1=benjin22->dijian();
            daikuanze=benjin22->daikuan();
            yuegong11=benjin22->yuegong1();
            ui->lineEdit_01->setText("");
            ui->lineEdit_02->setText("");
            ui->label_dijian->setText(QString::number(dijian1));
            ui->label_huankuan->setText(QString::number(huankuan1));
            ui->label_yuegong->setText(QString::number(yuegong11));
            ui->label_yueshu->setText(QString::number(yueshu1));
            ui->label_zonge->setText(QString::number(daikuanze));
            ui->label_shouyue->setText("首月月供:");
             ui->label_now->setText("元");
            ui->label_shoufu->setText("无");
           ui->label_lixi->setText(QString::number(lixi1));

        }
   }
    if(panduan==2)
    {
     //等额本息
        if(zonge1==0)
            {
            //此段是在进行利用面积，价格来计算
       benxi11->setm(area1);
        benxi11->setc(chengshu1);
        benxi11->setn(years);
        benxi11->setz(lilv1);
        benxi11->sety(price1);
       yueshu1=benxi11->yueshu();
       shoufu1=benxi11->shoufu();
       lixi1=benxi11->lixi();
       huankuan1=benxi11->huankuan();
       daikuanze=benxi11->daikuan();
       yuegong11=benxi11->yuegong1();
       ui->lineEdit_05->setText("");
       ui->label_lixi->setText(QString::number(lixi1));
       ui->label_dijian->setText("无");
       ui->label_huankuan->setText(QString::number(huankuan1));
       ui->label_shoufu->setText(QString::number(shoufu1));
       ui->label_yuegong->setText(QString::number(yuegong11));
       ui->label_yueshu->setText(QString::number(yueshu1));
       ui->label_zonge->setText(QString::number(daikuanze));
       ui->label_shouyue->setText("月供:");
      ui->label_now->setText("元");
       }
        else
        {
            //用直接输入的贷款总额进行计算
            benxi22->setzonre(zonge1);
            benxi22->setn(years);
             benxi22->setz(lilv1);
             yueshu1=benxi22->yueshu();
             lixi1=benxi22->lixi();
             huankuan1=benxi22->huankuan();
             daikuanze=benxi22->daikuan();
             yuegong11=benxi22->yuegong1();
            ui->lineEdit_01->setText("");
             ui->lineEdit_02->setText("");
             ui->label_lixi->setText(QString::number(lixi1));
             ui->label_dijian->setText("无");
             ui->label_huankuan->setText(QString::number(huankuan1));
             ui->label_shoufu->setText("无");
             ui->label_yuegong->setText(QString::number(yuegong11));
             ui->label_yueshu->setText(QString::number(yueshu1));
             ui->label_zonge->setText(QString::number(daikuanze));
             ui->label_shouyue->setText("月供:");
             ui->label_now->setText("元");
        }
    }
}
