#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Apply in sorted data structure
//lower_bound-> if value present in the array then return it's pointer, otherwise return next greater element pointer.
int main()
{
   vector<int> v={1,2,5,8};
   auto it = lower_bound(v.begin(), v.end(), 8);
    if(it==v.end())
        cout<<"not present";
    else
        cout<<(*it);
   return 0;
}