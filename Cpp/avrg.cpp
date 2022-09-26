#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,*p,k,sum=0;
    float avrg;
    cout<<"how many numbers you are enter \n";
    cin>>k;
    p=(int*)calloc(k,4);
    cout<<"enter "<<k<<" number\n";
    for(i=0;i<k;i++){
        cin>>p[i];
    }
    for(i=0;i<k;i++){
        sum=sum+p[i];
    }
    avrg=sum/k;
    cout<<"average of numbers is "<<avrg;
}
