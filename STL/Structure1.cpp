#include<stdio.h>
#include<iostream>
using namespace std;
struct S1
{
    int a,b;
    S1(int x,int y)
    {
        a=x;b=y;
    }
    S1()
    {
        cout<<" HELLO ";
    }

    void set_data(int x,int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<a<<ends<<b;
    }
};
struct S2:public S1
{
    int c;
};
int main()
{
//    S1 s1,s2(4,5);
    S2 s3;
    s3.set_data(10,11);
//    s *s1 = new s(3,4);
//    s1.set_data(1,2);
//    s1.show_data();
//    s2.show_data();
    s3.show_data();
    return 0;
}
