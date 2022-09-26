#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={6,5,4,3,2,1};
    /* vector<int>::reverse_iterator rit = v.rbegin();
    auto it = upper_bound(v.rbegin(), v.rend(), 4);
    cout<<(*it)<<endl; */
    /* for(; rit!=v.rend(); rit++)
        cout<<(*rit)<<" "; */
   auto it = upper_bound(v.rbegin(), v.rend()-2, v[1]);
   cout<<(*it);
   return 0;
}