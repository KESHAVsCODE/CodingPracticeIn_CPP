#include<iostream>
using namespace std;
class tom
{
private:
    int a,b;
public:
    tom()
    {

    }
    tom(int k)
    {
        a=k;b=0;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
};
int main()
{
    tom t;
    int x=2;
    t=x;
    t.showdata();
}
