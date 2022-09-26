#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void shawdata()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    complex operator ++()
    {
        complex temp;
        temp.a=++a;
        temp.b=++b;
        return temp;
    }
    complex operator ++(int)   // int arg only for diff. bwt pre and post increement;
    {
        complex i;
        i.a=a++;
        i.b=b++;
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c2=++c1;
    c2.shawdata();
    c2=c1++;
    c2.shawdata();
    c1.shawdata();
}

