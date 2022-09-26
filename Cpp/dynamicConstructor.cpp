#include<iostream>
using namespace std;
class Car
{
    int *a,Size;
    public:
    Car(int x)
    {
        Size=x;
        a=new int[Size];
    }
    void set_Car()
    {
        for(int i=0;i<Size;i++)
            cin>>a[i];
    }
    void show_Car()
    {
        for(int i=0;i<Size;i++)
            cout<<a[i]<<ends;
    }
};
int main()
{
    Car c(5);
    c.set_Car();
    c.show_Car();
    return 0;
}
