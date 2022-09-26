#include<iostream>
using namespace std;
class tom
{
private:
    int x;
    float y;
public:
    void setdata(int i,float j)
    {
        x=i;y=j;
    }
    void showdata()
    {
        cout<<"X="<<x<<"Y="<<y<<endl;
    }
    operator float()
    {
        return(x+y);
    }
};
int main()
{
    tom t;
    t.setdata(3,4.4);
    t.showdata();
    float k;
    k=t;
    cout<<endl<<"K="<<k;
}
