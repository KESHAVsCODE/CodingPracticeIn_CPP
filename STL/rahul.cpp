#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0; i<n; i++)// array size should be even
        cin>>v[i];
    sort(v.begin(), v.end());
    int sum = v[n-1]+v[0];
    int ef=v[n-1]*v[0];
    for(int i=1,j=n-2; i<j; i++,j--)
    {
        if(sum != v[i]+v[j]){
            cout<<"-1";
            return 0;
        }
        else
        {
            ef=ef+v[i]*v[j];
            cout<<ef<<" ";
        }
    }
    cout<<ef;
    return 0;
}
