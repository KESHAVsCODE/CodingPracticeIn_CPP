#include<iostream>
using namespace std;
class A
{
public:
    void f1()       //virtual function
    {
        cout<<"Af1()";
    }
    virtual void f2()       //virtual function
    {
        cout<<"Af2()";
    }
    virtual void f3()       //virtual function
    {
        cout<<"Af3()";
    }
    virtual void f4()       //virtual function
    {
        cout<<"Af4()";
    }
   /* virtual void f4(int k)
    {
        cout<<"Af(k)";
    }*/
};
class B:public A
{
public:
    void f1()       //virtual function
    {
        cout<<"Bf1()";
    }
    void f2()                //automatic hee virtual function ban jayega
    {
        cout<<"Bf2()";
    }
    void f4(int k)
    {
        cout<<"Bf4()";
    }
};
int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    p->f1();//EB
    p->f2();//LB
    p->f3();//LB
    p->f4();//LB
    p->f4(5);//EB
}








