#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findCombinations(int candidate,int n,int k, vector<int> temp, vector<vector<int>> &ans)
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=candidate; i<=n; i++)
    {
        temp.push_back(i);
        findCombinations(i+1, n, k, temp, ans);
        temp.pop_back();
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> temp;
    int k=3,n=5;
    findCombinations(1, n, k, temp, ans);
    for(auto &vs: ans)
    {
        for(auto x: vs)
            cout<<x<<" ";
        cout<<endl;
    }
   return 0;
}