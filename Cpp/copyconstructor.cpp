#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
//    complex(int x,int y)
//    {
//        a=x;b=y;
//    }
//    complex(complex &c)    //copy constructor
//    {
//        a=c.a;
//        b=c.b;
//    }
    complex(){a=0;b=0;}
    void set_data(int x,int y)
    {
        a=x; b=y;
    }
    void show_data()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    complex c1;
    complex c2=c1;
    c1.show_data();
    c2.show_data();
}
