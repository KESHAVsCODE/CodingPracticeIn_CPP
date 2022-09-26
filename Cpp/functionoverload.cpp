#include<iostream>
using namespace std;
float area(int);
int area(int,int,int);
float area(int r)
    {
        return 1.33*(3.14*r*r*r);
    }
int area(int l,int b,int h)
    {
        return l*b*h;
    }
int main()
{
    float t;
    int l,b,h,r;
    cout<<"enter radius of sphere\n";
    cin>>r;
    t=area(r);
    cout<<t;
    cout<<"\n enter length,breadth,hight cuboid\n";
    cin>>l>>b>>h;
    cout<<area(l,b,h);
}
