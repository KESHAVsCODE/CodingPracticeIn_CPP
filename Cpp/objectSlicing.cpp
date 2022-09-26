#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    A(){
    a=0,b=0;
    }
    A(int x,int y)
    {
        a=x;b=y;
    }
    void fun1()
    {
        cout<<"a->"<<a<<" "<<"b->"<<b<<endl;
    }
};
class B:public A
{
public:
    int c;
    B(int x,int y,int z):A(x,y)
    {
        c=z;
    }
    void fun2()
    {
        fun1();
        cout<<"c->"<<c;
    }
};
int main()
{
    A obj;
    B obj1(1,2,3);
    obj=obj1;  // obj1 sliced by obj because obj has only two instance member where as obj1 has three instance member so that one instance sliced away
    obj1.fun2();
   // obj.fun2(); //this will generate error because f2 function not copied in obj
    return 0;
}
