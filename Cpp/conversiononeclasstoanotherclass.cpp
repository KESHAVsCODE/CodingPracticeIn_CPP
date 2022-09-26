#include<iostream>
using namespace std;
class product
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
class item
{
private:
    int a,b;
public:
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    item()
    {

    }
    item(product p)
    {
        a=p.geta();
        b=p.getb();
    }
};
int main()
{
    product p;
    item t;
    p.setdata(3,4);
    t=p;
    t.showdata();
}
