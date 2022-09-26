#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        A()
        {
            cout<<"HELLO"<<endl;
        }
        A(int x)
        {
            a=x;
        }
};
class B:public A
{
    int b;
    public:
        B(int x,int y):A(x)
        {
            b=y;
        }
};
int main()
{
    B b(3,4);

}
