#ifndef BENXI_H
#define BENXI_H


class benxi
{
public:
    benxi();
    void setm(int m1);
    void setn(int n1);
    void sety(int y1);
    void setz(double z1);
    void setc(float c1);
    int yuegong1( );//月供1
    int huankuan();//还款总额
    int lixi();//支付的总利息
    int daikuan();//贷款总额，当w未输入时使用
    int shoufu();
    int yueshu();
private:
    int mianji,danjia,year,zonge;//m为房屋面积，y为房屋单价，n为按揭年数，w为总贷款额
    double lilv;//贷款利率
    float chengshu;//按揭成数
};

#endif // BENXI_H
