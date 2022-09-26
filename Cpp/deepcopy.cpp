#include<iostream>
using namespace std;
class dum
{
private:
    int x,y,*p;
public:
    dum()
    {
        p=new int;
    }
    void setdata(int i,int j,int k)
    {
        x=i;
        y=j;
        *p=k;
    }
    void showdata()
    {
        cout<<x<<y<<*p;
    }
    dum(dum &d)
    {
        x=d.x;
        y=d.y;
        p=new int;
        *p=*(d.p);
    }
    ~dum()
    {
        delete p;
        cout<<" content deleted";
    }

};
int main()
{
    dum d1;
    d1.setdata(3,4,5);
    dum d2=(d1);
    d2.showdata();
}
