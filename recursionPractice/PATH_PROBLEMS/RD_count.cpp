#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int giveMePathCount(int m,int n)
{
    if(m==1 || n==1)
        return 1;
    int down = giveMePathCount(m-1, n);
    int right= giveMePathCount(m, n-1);
    return down+right;
}
int main()
{
    cout<<"Total Path -> "<<giveMePathCount(2,3);
   return 0;
}