#include "benjin2.h"

benjin2::benjin2()
{

}
void benjin2::setlilv(double n)
{
    lilv=n/100;
}
void benjin2::setzonge(float n)
{
    zonge=n*10000;
}
void benjin2::setnian(int n)
{
    nian=n;
}

int benjin2::lixi()//计算总利息
{
    int months=nian*12;
    int lixi1;
    lixi1=(months+1)*zonge*(lilv/12);
    lixi1=(lixi1/2)+1;
    return lixi1;
}
int benjin2::dijian()//每月递减数
{

        int month = nian * 12;
        double lixi3;
        lixi3 = lilv / 12;
       double  dijian1;
       dijian1 = zonge / month * lixi3;
        return dijian1+1;

}
int benjin2::daikuan()//返回贷款总额
{
    return zonge;
}
int benjin2::huankuan()//还款总额
{
    int months=nian*12;
    double lixi1;
    lixi1=(months+1)*zonge*(lilv/12);
    lixi1=(lixi1/2)+1;
    int x=(int)lixi1;
    if(lixi1>x&&lixi1<x+1)
        lixi1+=1;
    return lixi1+zonge;
}
int benjin2::yuegong1()//首月月供
{
    int month=nian*12;
    int yuegong;
    yuegong=zonge/month+zonge*(lilv/12);
    return yuegong+1;
}
int benjin2::yueshu2()
{
    return nian*12;
}
