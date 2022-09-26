#include<iostream>
using namespace std;
class year
{
    private:
    static int y;
    public:
    static checkyear(int y)
    {
        if(y%400==0||y%100!=0&&y%4==0)
            cout<<"leap year";
        else
            cout<<"non leap year";
    }
};
int year::y;
int main()
{
    int yy;
    cout<<"enter a year\n";
    cin>>yy;
    year::checkyear(yy);
}
