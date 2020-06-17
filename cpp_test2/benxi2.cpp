#include "benxi2.h"
#include<math.h>
benxi2::benxi2()
{

}
void benxi2::setn(int n1)//按揭年数
{
    year=n1;
}
void benxi2::setz(double z1)//年利率
{
    lilv=z1/100;
}
void benxi2::setc(float c1)//按揭成数
{
    chengshu=c1/10;
}
void benxi2::setzonre(float n)
{
    zonge=n*10000;
}
int  benxi2::daikuan()
{
    return zonge;
}
int benxi2::yueshu()//月期
{
    return year*12;
}
int benxi2::huankuan()//还款总额
{
    int P=zonge;
    double R=lilv/12;
    int N=year*12;
    double z;
   z=pow(1+R,N);
     double x;
     x=z*P*R;
     x/=(z-1);
     x=x*N;
     return x;
}
int benxi2::yuegong1()//每月月供
{
    int P=zonge;
    double R=lilv/12;
    int N=year*12;
    double z;
   z=pow(1+R,N);
     double x;
     x=z*P*R;
     x/=(z-1);
     return x+1;
}
int benxi2::lixi()//总利息
{
    int P=zonge;
    double R=lilv/12;
    int N=year*12;
    double z;
   z=pow(1+R,N);
     double x;
     x=z*P*R;
     x/=(z-1);
     x=x*N-P;
     return x;

}
