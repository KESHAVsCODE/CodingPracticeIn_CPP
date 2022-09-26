#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void setdata(int x,int y)
    {
        a=x; b=y;
    }
    void display()
    {
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;   //a= caller object ka member hai c.a c2 object a ki value hai
        temp.b=b+c.b;   //b= caller object ka member hai c.b c2 object b ki value hai
        return temp;
    }

};
int main()
{
    int r,t,g,h;
    complex c1,c2,c3;
    cout<<"enter the values\n";
    cin>>r>>t>>g>>h;
    c1.setdata(r,t);
    c2.setdata(g,h);
    c3=c1.add(c2);    //c1 =caller object, add function caller object ka member function hai yani add function c1 ke member ko direct access kar skata hai
    c3.display();
}
