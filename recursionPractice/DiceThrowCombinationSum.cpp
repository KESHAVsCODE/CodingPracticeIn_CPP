#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void diceThrowCombinationSum(int n, vector<int> temp, vector<vector<int>> &ans) 
{
    if(n==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=1; i<=n; i++)
    {
        temp.push_back(i);
        diceThrowCombinationSum(n-i, temp, ans);
        temp.pop_back();
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> temp;
   diceThrowCombinationSum(11, temp, ans);
   for(auto &x: ans)
   {
        for(auto y: x)
            cout<<y<<" ";
        cout<<endl;
   }
   return 0;
}