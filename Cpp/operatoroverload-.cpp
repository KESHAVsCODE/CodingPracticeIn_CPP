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
        cout<<"a="<<a<<"b="<<b;
    }
    complex operator -(complex c)  //complex subs(complex c){}
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1-c2;
//    c3=c1.operator+(c2);        //also use c3=c1.operator+(c2) and also use when function name complex add(complex c){} c3=c1.subs(c2);
    c3.shawdata();
}
