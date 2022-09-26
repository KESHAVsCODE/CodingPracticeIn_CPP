#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    void getSet(vector<int> nums,  int i,  vector<int> temp,  vector<vector<int>> &vt)
    {
        if(i==nums.size())
        {
            vt.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        getSet(nums,i+1,temp,vt);
        temp.pop_back();

        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;// block repition of subset
        getSet(nums,i+1,temp,vt);
         
    }
int main()
{
   vector<int> v={1,2,3};
   vector<vector<int>> ans;
   vector<int> temp;
   getSet(v, 0, temp, ans);
   cout<<'[';
   for(auto &vs: ans)
   {
    cout<<'[';
    for(auto x: vs)
        cout<<x<<" ";
    cout<<']'; 
   }
   cout<<']';
   return 0;
}