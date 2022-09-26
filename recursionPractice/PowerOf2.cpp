#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int power, double num)
{
    if(num==1)
        return true;
    int x = (int)(num/power);
    if(x*power == num)
        return powerOfTwo(power, num/power);
    return false;
}
int main()
{
   cout<<(bool)powerOfTwo(3, 45);
   return 0;
}