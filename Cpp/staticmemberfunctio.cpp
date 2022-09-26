#include<iostream>
using namespace std;
class account
{
    private:
    int balance;
    public:
    static float money;
    static float setdata(float t)
    {
        money=t;
    }
    static void showdata()
    {
        cout<<money;
    }
};
float account::money;
int main()
{

    account a1;
    cout<<account::money;
    a1.setdata(3.45);
    account::setdata(3.4);
    account::showdata();
}
