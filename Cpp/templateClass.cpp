#include<iostream>
using namespace std;
template <class X,class Y>
class tom
{
private:
     X x;
     Y y;
public:
    void setdata(X i,Y j)
    {
        x=i;y=j;
    }
    void showdata()
    {
        cout<<"X="<<x<<"Y="<<y<<endl;
    }
    operator Y()
    {
        return(x+y);
    }
};
int main()
{
    tom <int,float>t;
    t.setdata(3.5,4.4f);
    t.showdata();
    float k;
    k=t;
    cout<<endl<<"K="<<k;
}
