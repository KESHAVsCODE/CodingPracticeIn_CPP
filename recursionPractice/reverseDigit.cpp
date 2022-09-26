
#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int reverseDigit(int n,int ans)
{
    if(n==0)
        return ans;
    ans = ans*10 + (n%10);
    return reverseDigit(n/10, ans);
//    if(n==0){
//        tL = l-1;
//        return 0;
//    }
    //return reverseDigit(n/10,l+1,tL)+(n%10)*pow(10,tL-l);
}
int main()
{
    //int tL = 0,L=0,n=125187456;
//    cout<<reverseDigit(n, L,tL);
    int ans=0,n=1234567;

    cout<<reverseDigit(n,ans);
    return 0;
}
