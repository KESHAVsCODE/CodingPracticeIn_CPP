#include<iostream>
#include<conio.h>
using namespace std;
class pop
{
private:
    int x,y;
    const int z;
    int &n;
public:
    pop(int &k):x(3),y(4),z(5),n(k)
    {
    }
    void setdata(int i,int j)
    {
        x=i;y=j;
    }
    void printdata()
    {
        cout<<" "<<x<<" "<<y<<z<<n;
    }
};
int main()
{
    int t=20;
    pop obj(t);
    obj.printdata();
}
