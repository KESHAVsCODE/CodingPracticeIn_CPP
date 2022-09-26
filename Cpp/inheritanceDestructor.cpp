#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    ~A()
    {
        cout<<"A"<<endl;
    }
};
class B:public A
{
    int b;
    public:
    ~B()
    {
        cout<<"B"<<endl;
    }
};
int main()
{
    B b1;
}
