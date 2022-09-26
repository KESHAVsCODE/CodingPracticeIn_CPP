#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int a[] = {1,2,3};
//    vector<long long> v(begin(a),end(a));
//    vector<long long> v(a,a+3);
    vector<long long> v(a,a+sizeof(a)/sizeof(a[0]));
    v.push_back(4);
    v.insert(v.begin(),0);
    for(auto x: v)
        cout<<x<<" ";

    return 0;
}
