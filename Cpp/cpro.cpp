#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s,s1="";
    vector<int> v = {-1,-2,1,2};
    s1 += to_string(v[0]);
    s1.pop_back();
    cout<<s1;
    return 0;
}
