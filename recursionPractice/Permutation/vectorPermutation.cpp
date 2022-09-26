#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void getPermutations(vector<int> &s, vector<int> t, int i,vector<vector<int>> &vs);
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> vot;
    vector<int> t;
    getPermutations(nums, t, 0, vot);
    return vot;
}
/*     void getPermutations(vector<int> &nums,vector<vector<int>> &vot,int k)
    {
        if(k==nums.size())
        {
            vot.push_back(nums);
            return;
        }  
        for(int i=k; i<nums.size();i++)
        {
            swap(nums[i],nums[k]);
            getPermutations(nums, vot, k+1);
            swap(nums[i],nums[k]);
        } 
    } */
void getPermutations(vector<int> &s, vector<int> t, int i,vector<vector<int>> &vs)
{
    if(i==s.size())
    {
        vs.push_back(t);
        return;
    }
    for(int j=0; j<=t.size(); j++)
    {
        
        t.insert(t.begin()+j, s[i]);
        getPermutations(s, t, i+1, vs);
        t.erase(t.begin()+j);
    }
}
int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> v = permute(nums);
    for(auto &x: v)
    {
        for(auto y: x)
            cout<<y;
        cout<<endl;
    }
    return 0;
}


