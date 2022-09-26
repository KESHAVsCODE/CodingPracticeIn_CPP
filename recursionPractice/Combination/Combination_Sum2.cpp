#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findCombinationsSum(int i, int target, vector<int> &temp,vector<int> &candidate, vector<vector<int>> &ans)
{
    if(target == 0)
    {
        ans.push_back(temp);
        return;
    }
    if(i==candidate.size())
        return;
    //taking
    int sum = target - candidate[i];
    if(sum>0)
    {
        temp.push_back(candidate[i]);
        findCombinationsSum(i+1, sum, temp, candidate, ans);
        temp.pop_back();
    }
    else if(sum==0)
    {
        temp.push_back(candidate[i]);
        findCombinationsSum(i+1, sum, temp, candidate, ans);
        temp.pop_back();
        return;
    }
    else if(sum<0)
        return;
    //ignoring
    while((i<candidate.size()-1) && candidate[i]==candidate[i+1])i++;
    findCombinationsSum(i+1, target, temp, candidate, ans);
}
int main()
{
    vector<vector<int>> ans;
    vector<int> candidate = {2, 5, 2, 1, 2};
    sort(candidate.begin(), candidate.end());
    vector<int> temp;
    int target = 5;
    findCombinationsSum(0, target, temp, candidate, ans);

    for(auto &vs: ans)
    {
        for(auto x: vs)
            cout<<x<<" ";
        cout<<endl;
    }
   return 0;
}