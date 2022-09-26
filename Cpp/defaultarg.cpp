#include<iostream>
using namespace std;
int add(int,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b)<<endl;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    cout<<"sum is "<<add(a,b,c);
}
int add(int x,int y,int z)
{
    return x+y+z;
}

