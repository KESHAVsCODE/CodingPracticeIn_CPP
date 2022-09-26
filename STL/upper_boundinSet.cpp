#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//upper_bound or lower_bound function in sets or maps
int main()
{
   set<int> s={5,8,9,7,2}; // set by default element stored in sorted manner
   //auto it = lower_bound(s.begin(), s.end(), 8);// when we use like this it will take O(n) time in sets and map.
    auto it1 = s.lower_bound(8); // O(log(n))
    if(it1==s.end())
        cout<<"not present"<<endl;
    else
        cout<<(*it1)<<endl;

    auto it2 = s.upper_bound(8); // O(log(n))
    if(it2==s.end())
        cout<<"not present";
    else
        cout<<(*it2);
   return 0;

}