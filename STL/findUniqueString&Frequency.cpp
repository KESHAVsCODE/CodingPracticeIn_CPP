#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<string> v = {"a","e","f","a","e","d","d","c","b","b"};
    map<string,int> m;
    string s;
    auto t = m.begin();
    for(int i = 0 ; i < v.size() ; i++)
    {
        m[v[i]]++;
    }

    for(auto &a : m)
        cout<<a.first<<" "<<a.second<<endl;


    return 0;
}
