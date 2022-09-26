#include<iostream>
using namespace std;
class tom
{
    private:
    int a,b;
public:
  /*  void setdata(int x,int y)
    {
        a=x,b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }*/
    friend ostream& operator <<(ostream&,tom);
    friend istream& operator >>(istream&,tom&);
};
ostream& operator <<(ostream &dout,tom c)
{
    cout<<c.a<<" "<<c.b<<endl;
    return(dout);
}
istream& operator >>(istream &din,tom &c)
{
    cin>>c.a>>c.b;
    return(din);
}
int main()
{
    tom t1,t2;
    cout<<"enter data\n";
    cin>>t1>>t2;//   [operator>>(cin,t1)] jo return karega vo>>(cin,t2);
    cout<<t1<<t2<<endl;
//    t1.showdata();
  //  t2.showdata();
}
