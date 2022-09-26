#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void bubbleSort(string &v, int i,int n)
{
    if(n==0)
        return;
    if(i>=n)
        return;
    if(v[i]>v[i+1])
        swap(v[i],v[i+1]);
    bubbleSort(v, i+1, n);
    if(i == 0)
        bubbleSort(v, 0, n-1);
    return;
}
int main()
{
    string v = "keshav";
    bubbleSort(v, 0, v.size()-1);
    for(auto x: v)
            cout<<x<<" ";
    return 0;
}
