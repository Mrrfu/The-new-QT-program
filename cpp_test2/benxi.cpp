#include "benxi.h"
#include<math.h>

benxi::benxi()
{
}
void benxi::setm(int m1)//房屋面积
{
    mianji=m1;
}
void benxi::setn(int n1)//按揭年数
{
    year=n1;
}
void benxi::sety(int y1)//单价
{
    danjia=y1;
}
void benxi::setz(double z1)//年利率
{
    lilv=z1/100;
}
void benxi::setc(float c1)//按揭成数
{
    chengshu=c1/10;
}
int benxi::lixi()//总利息
{
    int P=mianji*danjia*chengshu;
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
int benxi::shoufu()//首付
{
    double shoufu1;
    shoufu1=mianji*danjia*(1-chengshu);
    return shoufu1+1;
}
int benxi::yueshu()//月期
{
    return year*12;
}
int benxi::huankuan()//还款总额
{
    int P=mianji*danjia*chengshu;
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
int benxi::yuegong1()//每月月供
{
    int P=mianji*danjia*chengshu;
    double R=lilv/12;
    int N=year*12;
    double z;
   z=pow(1+R,N);
     double x;
     x=z*P*R;
     x/=(z-1);
     return x+1;
}
int benxi::daikuan()
{
    return mianji*danjia*chengshu;
}
