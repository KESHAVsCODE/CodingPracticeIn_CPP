#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,4>obj={78,43,43,34};
    cout<<obj.at(1); //at member function

    cout<<endl<<obj[2]; //[]operator

    cout<<endl<<obj.front(); //front()=return first element of array

    cout<<endl<<obj.back();  // back()=return last element of array

    obj.fill(24);
    for(int i=0;i<=3;i++)
    cout<<endl<<obj[i];
}

