#include<iostream>
using namespace std;
class Car
{
private:
    int *c;
public:
    Car(int x)
    {
        c = new int;
       *c = x;
       cout<<"HELLO 1 ";
    }
    ~Car()
    {
        cout<<"HELLO 11 ";
        delete c;
    }
    void show_data()
    {
        cout<<*c<<endl;
    }
};
class SportsCar:public Car
{
private:
    int *s;

public:
    static int a;
    SportsCar(int y):Car(y)
    {
        s = new int;
       *s = y;
       cout<<"HELLO2 ";
    }
    ~SportsCar()
    {
        cout<<"HELLO 22 ";
        delete s;
    }
    void show_data()
    {
        cout<<*s<<endl;
    }
};
int SportsCar::a=0;
int main()
{
    SportsCar *sc = new SportsCar(13);
    sc->show_data();
    delete sc;                          // if we don't free obeject memory here then still object memory exist in consumed area
                                        //  and destructor never will be called by compiler so that it must to release object memory
                                        //  by your self
    return 0;
}

