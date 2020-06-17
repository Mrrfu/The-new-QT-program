#include "zuhe1.h"
#include<QDebug>
zuhe1::zuhe1()
{

}
void zuhe1::setgong(double n)
{
    gong=n*10000;
}
void zuhe1::setshang(double n)
{
    shang=n*10000;
}
void zuhe1::setgongli(double n)
{
    gongli=n/100;
}
void zuhe1::setshangli(double n)
{
    shangli=n/100;
}
void zuhe1::setyear(int n)
{
    year=n;
}
int zuhe1::returnyear()//返回贷款年限
{
    return year*12;
}
int zuhe1::yuegong()//首月月供
{
    int month = year * 12;
        int yuegong1 = (gong / month) + gong * (gongli / 12);
        int yuegong2 = (shang / month) + shang * (shangli / 12);
        int x;
        x = yuegong1 + yuegong2;
        return x ;
}
int zuhe1::daikuanzonge()//返回贷款总额
{
    int x;
    x=gong+shang;
    return x+1;
}
int zuhe1::huankuanzonge()//计算还款总额
{
    int month = year * 12;
        int  lixi1;
        lixi1 = (month + 1) * gong * (gongli / 12);
        lixi1 = (lixi1 / 2);
        int  lixi2;
        lixi2 = (month + 1) * shang * (shangli / 12);
        lixi2 = lixi2 / 2;
        int x;
        x = gong + shang + lixi1 + lixi2+2;
        return x;
}
int zuhe1::zonglixi()//返回总利息
{
    int month = year * 12;
        int  lixi1;
        lixi1 = (month + 1) * gong * (gongli / 12);
        lixi1 = (lixi1 / 2);
        int  lixi2;
        lixi2 = (month + 1) * shang * (shangli / 12);
        lixi2 = lixi2 / 2;
        return lixi1 + lixi2+2;
}
int zuhe1::dijian()//每月递减数
{
    int month = year * 12;
    double lixi1;
    lixi1 =gongli / 12;
   double  dijian1;
   dijian1 = gong / month * lixi1;
   double lixi2,dijian2;
   lixi2=shangli/12;
   dijian2=shang/month*lixi2;
    return dijian1+dijian2;
}
