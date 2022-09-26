#include<iostream>
#include<stdio.h>
using namespace std;
float area(int);
int area(int,int);
int main()
{
   int r,l,b;
   float p,q;
   cout<<"enter radius of circle:"<<endl;
   cin>>r;
   p=area(r);
   cout<<"area of circle is "<<p<<endl;
   cout<<"enter length and breadth of a rectangle"<<endl;
   cin>>l>>b;
   q=area(l,b);
   cout<<"area of rectangle is"<<q;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
