#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    complex operator -()
    {
        complex t;
        t.a=-a;
        t.b=-b;
        return(t);

    }
};
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c2=c1.operator-();//c2=-c1;
    c2.showdata();
}
