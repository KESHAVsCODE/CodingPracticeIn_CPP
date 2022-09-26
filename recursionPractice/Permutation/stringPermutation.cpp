#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void stringPermutation(string &s, string t, int i,vector<string> &vs)
{
    if(i==s.size())
    {
        vs.push_back(t);
        return;
    }
    for(int j=0; j<=t.size(); j++)
    {
        string out = t;
        out.insert(j, 1, s[i]);             // t.insert(j, 1, s[i]);
        stringPermutation(s, out, i+1, vs); // stringPermutation(s, t, i+1, vs);
    }                                       // t.erase(j, 1); we can do this like also if want not to use local string  
}
int main()
{
    vector<string> vs;
    string s="abc";
    string t="";
    int i=0;
    stringPermutation(s, t, i, vs);
    for(auto &x: vs)
        cout<<x<<" ";
    return 0;
}
