#include<iostream>
#include<bits/stdc++.h>
using namespace std;               // kunal kushwaha
int main()
{
    vector<vector<int>> vov;
    vector<int> v={1, 1, 1, 1};
    sort(v.begin(),v.end());
    vector<int> t1;
    vov.push_back(t1);
    t1.push_back(v[0]);vov.push_back(t1);
    int n=1;
    for(int i=1; i<v.size(); i++)
    {
        int j=0;
        if(v[i]==v[i-1])
            j=n;
        n = vov.size();
        for(; j<n; j++)
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