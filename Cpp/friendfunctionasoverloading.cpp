#include<iostream>
using namespace std;
class num
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<a<<" "<<b;
    }
    friend num operator +(num,num);
};
num operator +(num k,num l)
{
    num flag;
    flag.a=k.a+l.a;
    flag.b=k.b+l.b;
    return flag;
}
int main()
{
    num o1,o2,o3;
    o1.setdata(3,4);
    o2.setdata(5,6);
    o3=operator +(o1,o2);//also use o3=o1+o2;
    o3.showdata();
}
