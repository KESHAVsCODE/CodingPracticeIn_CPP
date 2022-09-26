#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw  "divide by 0 error";
        cout<<a/b;
    }
    catch(const char *r)
    {
        cout<<r<<"please enter another value";
        cin>>c;
        cout<<a/c;
    }
    getch();
}
