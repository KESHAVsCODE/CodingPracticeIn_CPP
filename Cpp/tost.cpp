#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x=8;
    int &y=x;
    y++;
    printf("%d",y);
}
