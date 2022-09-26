#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {6, 2, 1, 5, 4, 3, 0};
    int k,i;
    for(i=v.size()-1; i>0; i--)
        if(v[i]>v[i-1])
        break;
    
    cout<<"candidate 1->"<<v[i-1]<<endl;
    if(i==0)
        return 0;
    
    auto it = upper_bound(v.rbegin() , v.rend()-i, v[i-1]);
    cout<<"candidate 2->"<<(*it);
    
    
    cout<<endl<<"Given Permutation is -> ";
    for(auto x: v)
        cout<<x<<" ";
    
    cout<<endl<<"Next Permutation is ->  ";
    swap(v[i-1], *it);
    reverse(v.begin()+i,v.end());        
    for(auto x: v)
        cout<<x<<" ";
   
   return 0;
}