//friend function access multiple classes private member as same time
#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    int put1()
    {
        return a;
    }
   // friend void fun(A,B);
};
class B
{
private:
    int b;
public:
    void setdata(int y)
    {
        b=y;
    }
    int put2()
    {
        return b;
    }
    //friend void fun(A,B);
};
//void fun(A o1,B o2)
//{
//    cout<<"sum is"<<o1.a+o2.b;
//}
void fun(A o1,B o2)
{
    cout<<(o1.put1()+o2.put2());
}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(3);
    obj2.setdata(4);
    fun(obj1,obj2);
}
