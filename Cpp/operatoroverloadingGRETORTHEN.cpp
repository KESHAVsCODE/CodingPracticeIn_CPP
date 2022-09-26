#include<iostream>
#include<stdio.h>
using namespace std;
class Time
{
    int H,M,S;
public:
    void settime(int x,int y,int z)
    {
        H=x;M=y;S=z;
    }
    void showtime()
    {
        cout<<H<<":"<<M<<":"<<S;
    }
    int operator >(Time t)
    {
        (H>t.H):1:0;
        (M>t.M)?return(1):return(0);
        (S>t.S)?return(1):return(0);
    }
};
int main()
{
    Time t1,t2;
    t1.settime(3,45,60);
    t2.settime(4,40,45);
    if(t1>t2){
        t1.showtime();
    }
    else
        t2.showtime();
}
