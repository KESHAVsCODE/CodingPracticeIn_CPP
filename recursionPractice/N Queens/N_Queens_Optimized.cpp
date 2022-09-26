#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N;
bool isSafePosition(int r, int c, vector<unordered_set<int>> &help)
{
    if(help[0].find(r-c)!=help[0].end())
        return false;
    if(help[1].find(c)!=help[0].end())
        return false;
    if(help[2].find(r+c)!=help[0].end())
        return false;
    return true;
}
void queens_Paths(vector<pair<int, int>> &temp, int r, vector<vector<pair<int,int>>> &ans, vector<unordered_set<int>> &help)
{
    if(r==N+1)
    {
        ans.push_back(temp);
        return;        
    }
    
    for(int c=0; c<=N; c++)
    {
        if(isSafePosition(r, c, help)){
            temp.push_back({r,c});
            help[0].insert(r-c);
            help[1].insert(c);
            help[2].insert(r+c);

            queens_Paths(temp, r+1, ans, help);
            
            help[0].erase(r-c);
            help[1].erase(c);
            help[2].erase(r+c);
            temp.pop_back();
        }
    }
}
int main()
{
    N=6;
    vector<vector<pair<int,int>>> ans; 
    vector<unordered_set<int>> help(3, unordered_set<int>()); 
    vector<pair<int,int>> temp;

    queens_Paths(temp, 0,  ans, help);

    for(auto &it: ans)
    {
        cout<<'['<<" ";
        for(auto &p: it)
        {
            cout<<"{"<<p.first<<" "<<p.second<<"}, ";
        }
        cout<<']'<<endl;
    }
   return 0;
}