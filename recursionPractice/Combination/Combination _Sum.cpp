#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findCombinationsSum(int i, int target, vector<int> &temp,vector<int> &candidate, vector<vector<int>> &ans)
{
    if(i==candidate.size())
        return;
    if(target == 0)
    {
        ans.push_back(temp);
        return;
    }
    //taking
    int sum = target - candidate[i];
    if(sum>0)
    {
        temp.push_back(candidate[i]);
        findCombinationsSum(i, sum, temp, candidate, ans);
        temp.pop_back();
    }
    else if(sum==0)
    {
        temp.push_back(candidate[i]);
        findCombinationsSum(i, sum, temp, candidate, ans);
        temp.pop_back();
        return;
    }
    else if(sum<0)
        return;
    //ignoring
    findCombinationsSum(i+1, target, temp, candidate, ans);
}
int main()
{
    vector<vector<int>> ans;
    vector<int> candidate = {2, 3, 5};
    vector<int> temp;
    int target = 8;
    findCombinationsSum(0, target, temp, candidate, ans);

    for(auto &vs: ans)
    {
        for(auto x: vs)
            cout<<x<<" ";
        cout<<endl;
    }
   return 0;
}