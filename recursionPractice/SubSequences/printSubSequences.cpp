#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> printSubSequences(string &s, string t,int i)
{
    if(i==s.size())
    {
        vector<string> vs;
        vs.push_back(t);
        return vs;
    }
    vector<string> left = printSubSequences(s, t, i+1);
    t.push_back(s[i]);
    vector<string> right = printSubSequences(s, t, i+1);
    vector<string> v = left;
    v.insert(v.end(), right.begin(), right.end());
    return v;
}
int main()
{
    string s="kes";
    string t="";
    vector<string> vs = printSubSequences(s, t, 0);
    for(auto &x: vs)
        cout<<x<<" ";
   return 0;
}