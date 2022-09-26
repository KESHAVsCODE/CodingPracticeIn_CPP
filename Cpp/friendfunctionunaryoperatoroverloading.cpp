#include<iostream>
using namespace std;
class num
{
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
    friend num operator -(num);
};
num operator -(num k)
{
    num c;
    c.a=-k.a;
    c.b=-k.b;
    return c;
}
int main()
{
    num o,p;
    o.setdata(8,9);
    p=operator -(o);
    p.showdata();
}
