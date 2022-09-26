#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findCombinations(int n,int k,int i, vector<int> temp, vector<vector<int>> &ans)
{
    if(n==temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int j=i; j<=k; j++)
    {
        temp.push_back(j);
        findCombinations(n, k+1, j+1, temp, ans);
        temp.pop_back();
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> temp;
    int k=3,n=5;
    findCombinations(k, n-k+1, 1, temp, ans);
    for(auto &vs: ans)
    {
        for(auto x: vs)
            cout<<x<<" ";
        cout<<endl;
    }
   return 0;
}