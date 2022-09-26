#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    private:
    friend void fun(complex c){
        cout<<c.a+c.b;
    }

};
//void fun(complex c)
//{
//
//}
int main()
{
    complex c1;
    c1.setdata(3,4);
    fun(c1);
}
