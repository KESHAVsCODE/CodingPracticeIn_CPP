#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    void showdata()
    {
        cout<<a;
    }
};
class B:public A
{
protected:
    void setvalue(int y)
    {
        setdata(y);
    }
};
class c:public B
{
public:
   void setdigit(int z)
    {
        setvalue(z);
    }
};
int main()
{
    c obj;
    obj.setdigit(4);
    obj.showdata();
}
