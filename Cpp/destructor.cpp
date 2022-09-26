#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    ~complex()
    {
        cout<<"It is Destructor";
    }
};
void fun()
{
    complex c;
}
int main()
{
    fun();
}
