
//MAP->

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<char,int> um;
    string s = "abcabcbb";
    for(int i=0;i<s.size();i++)
//        um[s[i]]=i;
        um.insert({s[i],i});

    for(auto &x: um)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
