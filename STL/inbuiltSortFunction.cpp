#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    {
        if(a>b) return true;
        return false;
    }
    else{
        if(a.second>b.second) return true;
        return false; 
    }
}
int main()
{

   vector<pair<int,int>> v = {{1,5},{2,5},{8,9},{2,7},{2,2},{1,3}};
   for(int i=0; i<v.size(); i++)
   {
        for(int j=i+1; j<v.size(); j++)
        {
            if(should_i_swap(v[i],v[j]))
                swap(v[i],v[j]);
        }
   }

   for(auto &x: v)
    cout<<x.first<<" "<<x.second<<endl;
   return 0;
}