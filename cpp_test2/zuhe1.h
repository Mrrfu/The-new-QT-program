#ifndef ZUHE1_H
#define ZUHE1_H


class zuhe1//等额本金
{
public:
    zuhe1();
    void setshang(double n);
    void setgong(double n);
    void setshangli(double n);
    void setgongli(double n);
    void setyear(int n);
    int yuegong();
    int dijian();
    int daikuanzonge();
    int zonglixi();
    int huankuanzonge();
    int returnyear();
private:
    double shang,gong;
    double shangli,gongli;
    int year;
};

#endif // ZUHE1_H
