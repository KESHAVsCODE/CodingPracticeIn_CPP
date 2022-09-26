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
       cout<<" .HELLO 1.";
    }
    virtual ~Car()                 //agar hum yha virtual keyword nhi likhenge to compiler keval parent class ka destructor hi chla
    {                              //dega kyoki compiler early binding kar dega pointer ke type  ko dekh kar. pehle child class ka
        cout<<" .HELLO 11. ";          //destructor chlna chahiye. kyoki child class ka destructor apnni coding chlane ke baad hi parent
        delete c;                  //class ke destructor ko call karta hai.
    }
    virtual void show_data()
    {
        cout<<"CAR -> "<<*c<<endl;
    }
};
class SportsCar:public Car
{
private:
    int *s;
public:
    SportsCar(int y):Car(y)
    {
        s = new int;
       *s = y;
       cout<<" .HELLO 2. ";
    }
    ~SportsCar()
    {
        cout<<" .HELLO 22. ";
        delete s;
    }
    void show_data()
    {
        cout<<"SPORTSCAR-> "<<*s<<endl;
    }
};
void setObject()
{
    Car *sc = new SportsCar(2);
    sc->show_data();
    delete sc;                          // if we don't free obeject memory here then still object memory exist in consumed area
                                        //  and destructor never will be called by compiler so that it must to release object memory
                                        //  by your self
}
int main()
{
    setObject();
    return 0;
}
