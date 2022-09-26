#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(int x,int y)
    {
        a=x;b=y;
    }
    complex(int x)
    {
        a=x;b=0;
    }
    complex()
    {
        a=0;b=0;
    }
    void show_data()
    {
        cout<<" "<<a<<" "<<b<<endl;
    }

};
int main()
{
    int x=1,y=2;
//    cout<<"enter two number";
//    cin>>x>>y;

//

//    complex c2=complex(3,4);  //  complex c2(x,y); this is also valid.

    complex c3;                 //  complex c3=x; also use this way to pass value in constructor when argument is only one
    c3=x;                       //  because in this situation implicit overloaded assignment operator will be called by compiler which is
                                //  accept only one argument. when we call this way c3=(x,y); this wrong only last one argument that is y value
                                //  passed to the (=)operator and x consider as default value mention in the constructor.



//    complex c4;

//    c2.show_data();
    c3.show_data();
//    c4.show_data();
}
