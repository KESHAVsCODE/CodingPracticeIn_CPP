#include<iostream>
using namespace std;
class A
{
public:
   static  int a;
    static void setvalue(int x){

        a=x;
    }
    static void showvalue()
    {
        cout<<a;
    }
};
int A::a;
int main()
{
    A::setvalue(34);
    A::showvalue();
}
