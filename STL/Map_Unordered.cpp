#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<char,int> um;
    string s = "abcabcbb";
    for(int i=0;i<s.size();i++)
        um.insert({s[i],i});    // In unordered map also when we try to update key pair value through insert() then it does not
                                // update key ,to update key use []operator -> m[s[i]] = i;
    for(auto &x: um)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
