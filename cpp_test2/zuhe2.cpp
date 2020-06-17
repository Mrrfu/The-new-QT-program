#include "zuhe2.h"
#include<math.h>
zuhe2::zuhe2()//yon用于组合型的等
{

}
void zuhe2::setgong(double n)
{
    gong=n*10000;
}
void zuhe2::setshang(double n)
{
    shang=n*10000;
}
void zuhe2::setgongli(double n)
{
    gongli=n/100;
}
void zuhe2::setshangli(double n)
{
    shangli=n/100;
}
void zuhe2::setyear(int n)
{
    year=n;
}
int zuhe2::returnyear()//月数
{
    return year*12;
}
int zuhe2::zonglixi()//总利息
{
    int p1=gong;
    int p2=shang;
    double r1=gongli/12;
    double r2=shangli/12;
    int n=year*12;
    double z1,z2;
    z1=pow(1+r1,n);
    z2=pow(1+r2,n);
    double x1,x2;
    x1=z1*p1*r1;
    x2=z2*p2*r2;
    x1/=(z1-1);
    x2/=(z2-1);
    x1=x1*n-p1;
    x2=x2*n-p2;
    return x1+x2+2;

}
int zuhe2::daikuanzonge()//贷款总额
{
    return gong+shang+1;

}
int zuhe2::huankuanzonge()//还款总额
{
    int p1=gong;
    int p2=shang;
    double r1=gongli/12;
    double r2=shangli/12;
    int n=year*12;
    double z1,z2;
    z1=pow(1+r1,n);
    z2=pow(1+r2,n);
    double x1,x2;
    x1=z1*p1*r1;
    x2=z2*p2*r2;
    x1/=(z1-1);
    x2/=(z2-1);
    x1=x1*n;
    x2=x2*n;
    return x1+x2+2;
}
int zuhe2::yuegong()//每月月供
{
    int p1=gong;
    int p2=shang;
    double r1=gongli/12;
    double r2=shangli/12;
    int n=year*12;
    double z1,z2;
    z1=pow(1+r1,n);
    z2=pow(1+r2,n);
     double x1,x2;
     x1=z1*p1*r1;
     x2=z2*p2*r2;
     x1/=(z1-1);
     x2/=(z2-1);
     return x1+x2;
}






