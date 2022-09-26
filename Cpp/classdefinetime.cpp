#include<iostream>
using namespace std;
class Time
{
    private:
    int har,mint,sec;
    public:
        void settime(int,int,int);
        void showtime();
        void normalize();
};
void Time::settime(int h,int m,int s)
{
    har=h;mint=m;sec=s;
}
void Time::showtime()
{
    cout<<har<<":"<<mint<<":"<<sec<<endl;
}
void Time::normalize()
{
    mint=mint+sec/60;
    sec=sec%60;
    har=har+mint/60;
    mint=mint%60;
}
int main()
{
    Time T;
    T.settime(4,100,100);
    T.showtime();
    T.normalize();
    T.showtime();
}


