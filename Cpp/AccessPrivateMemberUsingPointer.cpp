#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class A{
private:
    const int a,b,c;
public:
    A():a(0),b(0),c(0){}
    A(int x,int y,int z):a(x),b(y),c(z)
    {
    }
    void setData(int x,int y,int z)const
    {
//        a=x; b=y;c=z;
    }
    void showData()
    {
        cout<<a<<" "<<b<<" "<<c<<" ";
    }
};
//class B:public A
//{
//private:
//    int d;
//public:
//    B():A(){}
//    B(int p,int q,int r,int s):A(p,q,r)
//    {
//        d = s;
//    }
////    void setData(int x,int y,int z,int t)
////    {
////        a=x;b=y;c=z;d=t;
////
////    }
//    void print()
//    {
//        showData();
//        cout<<" "<<d;
//    }
//};
int main()
{
    int *p;
    A obj;
    p = (int*)&obj;
//    p[0]=4;
//    p[1]=5;
//    p[2]=7;
//    obj.setData(1,2,3);
//    obj.print();
    obj.showData();
    return 0;
}
