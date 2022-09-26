#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getKPC(string &s, string t, int i, vector<string> &temp,vector<string> &ans)
{
    if(i==s.size())
    {
        ans.push_back(t);
        return;
    }
    for(int k=0; k<temp[s[i]-48].size(); k++)
    {
        t.push_back(temp[s[i]-48][k]);
        getKPC(s, t, i+1, temp, ans);
        t.pop_back();   
    }
}
int main() {
  string s;
  cin >> s;

  vector<string> temp = {".;", "abc", "def", "ghi", "jkl", "mnop", "qrst", "uv", "wxyz",
                         "?!"};
  vector<string> ans;
  string t;
  getKPC(s, t, 0, temp, ans);
    cout<<ans.size()<<endl;
  cout << '[';
  for(auto &a: ans)
        cout<<a<<" ";
  cout << ']';
}