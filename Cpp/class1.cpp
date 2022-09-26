#include<iostream>
using namespace std;
class complex
{
    public:
    int a,b;
    void set_data(int,int);
        void display()
        {
            cout<<"a="<<a<<" "<<"b="<<b;
        }
};
void complex::set_data(int x,int y)
        {
            a=x; b=y;
        }
int main()
{
    complex c1;
    c1.set_data(3,4);
    c1.display();
}
