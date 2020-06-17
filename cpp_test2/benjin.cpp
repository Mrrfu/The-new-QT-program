#include "benjin.h"

benjin::benjin()
{

}
void benjin::setm(int m1)//房屋面积
{
    mianji=m1;
}
void benjin::setn(int n1)//按揭年数
{
    year=n1;
}
void benjin::sety(int y1)//单价
{
    danjia=y1;
}
void benjin::setz(double z1)//年利率
{
    lilv=z1/100;
}
void benjin::setc(float c1)//按揭成数
{
    chengshu=c1/10;
}
int benjin::lixi()//总利息
{
    int months=year*12;
    int zonge1=mianji*danjia*chengshu;
   long int lixi1;
    lixi1=(months+1)*zonge1*(lilv/12);
    lixi1=(lixi1/2)+1;
    return lixi1;

}
int benjin::daikuan()//返回贷款总额
{
    int x;
    x=mianji*danjia*chengshu;
    return x;

}
int benjin::huankuan()//还款总额
{
    int months=year*12;
    int zonge1=mianji*danjia*chengshu;
    int lixi1;
    lixi1=(months+1)*zonge1*(lilv/12);
    lixi1=(lixi1/2)+1;
    return lixi1+zonge1;


}
int benjin::yuegong1()//首月月供
{
    int zonge1;
    zonge1=mianji*danjia*chengshu;
    int month=year*12;
    int yuegong;
    yuegong=zonge1/month+zonge1*(lilv/12);
    return yuegong+1;

}
int benjin::dijian()//每月月供递减额
{
    int zonge1;
        zonge1 = mianji * danjia * chengshu;
        int month = year * 12;
        double lixi3;
        lixi3 = lilv / 12;
       double  dijian1;
       dijian1 = zonge1 / month * lixi3;
        return dijian1+1;

}
int benjin::shoufu()
{
    int zonge1;
    zonge1=mianji*danjia*(1-chengshu);
    return zonge1+1;

}
int benjin::yueshu()
{
    return year*12;

}
