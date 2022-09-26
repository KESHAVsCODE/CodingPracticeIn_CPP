#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void getCombinationSum3(int candidate, int target, int length, vector<int> &temp, vector<vector<int>> &ans)
{
    if(temp.size()==length)
    {
        if(target==0)
            ans.push_back(temp);
        return;
    }
    if(candidate==10 || temp.size()>length)
        return;
    for(int val=candidate; val<=9; val++)
    {
        
        int sum = target - val;
        
        if(sum>0)
        {
            temp.push_back(val);
            getCombinationSum3(val+1, sum, length, temp, ans);
            temp.pop_back();
        }
        else if(sum==0)
        {   
            temp.push_back(val);
            getCombinationSum3(val+1, sum, length, temp, ans);
            temp.pop_back();
            return;
        }
        else if(sum<0)
            return;
    }
}
int main()
{
    int target=9,length=3;
    vector<vector<int>> ans;
    vector<int> temp;

    getCombinationSum3(1, target, length, temp, ans);
    for(auto &vec: ans)
    {
        for(auto x: vec)
            cout<<x<<" ";
        cout<<endl;
    }
}