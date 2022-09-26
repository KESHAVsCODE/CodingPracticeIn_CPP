#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> vot;
    getPermutations(nums, vot, 0);
    return vot;
}
void getPermutations(vector<int> &nums,vector<vector<int>> &vot,int k)
{
    if(k==nums.size())
    {
        vot.push_back(nums);
        return;
    }  
    unordered_set<int> us;
    for(int i=k; i<nums.size();i++)
    {
        if(us.find(nums[i])!=us.end())continue;
        us.insert(nums[i]);
        swap(nums[i],nums[k]);
        getPermutations(nums, vot, k+1);
        swap(nums[i],nums[k]);
    } 
}
int main()
{
    vector<int> nums = {1,2,2};
    vector<vector<int>> v = permuteUnique(nums);
    for(auto &x: v)
    {
        for(auto y: x)
            cout<<y;
        cout<<endl;
    }    
   return 0;
}