#include<iostream>
using namespace std;
class item
{
private:
    int a,b;
public:
    item(){}
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    int& geta()
    {
        return a;
    }
    int& getb()
    {
        return b;
    }
};
class product
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    operator item()
    {
        item temp;
        temp.geta()=a;
        temp.getb()=b;
        return(temp);
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
