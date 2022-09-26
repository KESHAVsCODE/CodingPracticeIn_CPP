#include<iostream>
using namespace std;
class array
{
private:
    char a[128];
public:
    void putvalue(int index,char value)
    {
        a[index]=value;
    }
    char operator [](int index)
    {
        return a[index];
    }
};
int main()
{
    array o;
    for(int i=0;i<=127;i++){
        o.putvalue(i,i+1);
    }
    for(int i=0;i<=127;i++){
        cout<<o[i]<<" ";//cout<<o.operator[i];
    }

}
