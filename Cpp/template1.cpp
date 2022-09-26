#include<iostream>
using namespace std;
template <class X,class Y,class Z>
double big(X a,Y b,Z c)
{
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else{
        if(b>c)
            return b;
        else
            return c;
    }
}
int main(){
    cout<<big(65.556,5.555,'A');
}
