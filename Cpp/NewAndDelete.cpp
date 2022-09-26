#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int x,i;
    cout<<"ENTER SIZE OF ARRAY";
    cin>>x;
    char *q;
    char *p=new char[x];
    q=p;
    for(i=0;i<x;i++){
        cin>>p[i];
    }
    for(i=0;i<x;i++){
        cout<<p[i];
    }
    delete p;
    for(i=0;i<x;i++){
        cout<<q[i];
    }
}
