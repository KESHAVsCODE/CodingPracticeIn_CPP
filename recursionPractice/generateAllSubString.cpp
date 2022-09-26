#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generateAllSubString(string s, string t, vector<string> &vs,int i,int j)
{
    if(i==s.size())
        return;
    if(j<s.size())
    {
        t.push_back(s[j]);
        vs.push_back(t);
        generateAllSubString(s, t, vs, i, j+1);
    }
    if(j==i)
        generateAllSubString(s, "", vs, i+1, i+1);
    return;
}
int main()
{
    string s = "java",t="";
    vector<string> vs;
    generateAllSubString(s, t, vs, 0, 0);
    for(auto &x: vs)
        cout<<x<<" ";
   return 0;
}