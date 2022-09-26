#include<iostream>
using namespace std;
class A
{
public:
    int a;
    void f1(){cout<<"f1()";};
};
class B1: virtual public A
{
public:
    int b1;
    void f2(){cout<<"f2()";};
};
class B2:virtual public A
{
public:
    int b2;
    void f3(){cout<<"f3()";};
};
class C:public B1,public B2
{
public:
    int c;
    void f4(){cout<<"f4()";};
};
int main()
{
    C obj;
   // obj.a=3;
    obj.f4();
    obj.f3();
    obj.f2();
    obj.f1();
    cout<<sizeof(obj)<<"byte";

}
