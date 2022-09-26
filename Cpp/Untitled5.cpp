#include<iostream>
#include"MySpace.h"
using namespace std;
using namespace MySpace;
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3=c1+c2;
    c3.shawdata();
    return 0;
}

