#ifndef BENJIN2_H
#define BENJIN2_H
#include<vector>
class benjin2
{
public:
    benjin2();
    void setzonge(float n);
    void setlilv(double n);
    void setnian(int n);
    int yuegong1( );//月供1
    int dijian();//每月递减额
    int huankuan();//还款总额
    int lixi();//支付的总利息
    int daikuan();//贷款总额
    int yueshu2();//返回月数
    int shougong();



private:
    float zonge;
    double lilv;
    float chengshu;
    int nian;
};

#endif // BENJIN2_H
