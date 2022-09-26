#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cout<<i;
        fact=fact*i;
    }
    cout<<"factorial of number is"<<fact;
}
