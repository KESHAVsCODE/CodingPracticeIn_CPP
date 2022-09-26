#include<iostream>
#include<bits/stdc++.h>
using namespace std;               // kunal kushwaha
int main()
{
    vector<vector<int>> vov(1,vector<int> ());
    vector<int> v={1, 2, 3};
    vector<int> t1;
    for(int i=0; i<v.size(); i++)
    {
        int n = vov.size()-1;
        for(int j=0; j<=n; j++)
        {
            t1 = vov[j];
            t1.push_back(v[i]);
            vov.push_back(t1);  
        }
    }

    for(auto &x: vov){
        for(auto y: x)
            cout<<y<<" ";
        cout<<endl;
    }
   return 0;
}