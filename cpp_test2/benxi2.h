#ifndef BENXI2_H
#define BENXI2_H


class benxi2
{
public:
    benxi2();
    void setm(int m1);
    void setn(int n1);
    void sety(int y1);
    void setz(double z1);
    void setc(float c1);
    void setzonre(float n);
    int yuegong1( );//月供1
    int huankuan();//还款总额
    int lixi();//支付的总利息
    int daikuan();//贷款总额
    int shoufu();
    int yueshu();
private:
    int year;//按揭年数
    float zonge;//m为房屋面积，y为房屋单价，n为按揭年数，w为总贷款额
    double lilv;//贷款利率
    float chengshu;//按揭成数
};

#endif // BENXI2_H
