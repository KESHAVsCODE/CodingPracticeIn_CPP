#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"enter three numbers:\n";
    cin>>i>>j>>k;
    if(i>j){
        if(i>k){
            cout<<i;
        }
        else
            cout<<k;
    }
    else
        if(j>k){
            cout<<j;
        }
        else
            cout<<k;
    return 0;
}
