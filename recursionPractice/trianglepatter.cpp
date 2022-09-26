#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void trianglePrint(int c,int r)
{
    if(r==0)
        return;
    if(c>r)
    {
        cout<<endl;
        return;
    }
    cout<<"* ";
    trianglePrint(c+1, r);
    if(c == 1)
        trianglePrint(1, r-1);
    return;
}
int main()
{
    vector<int>  v = {5,8,1,7,9,6,3,2};
    trianglePrint(1, 10);
    return 0;
}
