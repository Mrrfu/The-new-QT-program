#ifndef ZUHE2_H
#define ZUHE2_H


class zuhe2//用于组合型的等额本息还款
{
public:
    zuhe2();
    void setshang(double n);
    void setgong(double n);
    void setshangli(double n);
    void setgongli(double n);
    void setyear(int n);
    int yuegong();
    int daikuanzonge();
    int zonglixi();
    int huankuanzonge();
    int returnyear();
private:
   double shang,gong;
    double shangli,gongli;
    int year;
};

#endif // ZUHE2_H
