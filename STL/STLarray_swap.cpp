#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,4>obj1={78,43,43,34};
    array <int,4>obj2={8,3,4,2};
    obj1.swap(obj2);
    for(int i=0;i<4;i++)
        cout<<endl<<obj1[i];
    cout<<endl;
    for(int i=0;i<4;i++)
        cout<<endl<<obj2[i];
}
