#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void setdata(int x,int y,int z)
    {
        h=x;m=y;s=z;
    }
    Time operator +(Time t)
    {
        Time k;
        k.h=h+t.h;
        k.m=m+t.m;
        k.s=s+t.s;
        settime();
        return k;
    }
    void settime()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    void showdata()
    {
        cout<<h<<":"<<m<<":"<<s;
    }

};
int main()
{
    Time t[3];
    int a,b,c;
    for(int i=0;i<3;i++){
    cin>>a>>b>>c;
    t[i].setdata(a,b,c);
    }
    Time t1;
    for(int i=1;i<3;i++)
    {
    t1=t[i-1]+t[i];
    t1.showdata();
    cout<<endl;
    }
  /*  t1.setdata(4,35,26);
    t2.setdata(3,50,45);
    t3=t1+t2;
    //t3.settime();
    t3.showdata();*/
}
