#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(char c1, char c2)
{
     if(c1=='(' && c2==')')
        return true;
    else if(c1 == '{' && c2 == '}')
        return true;
    else if(c1 == '[' && c2 == ']')
        return true;
    else
        return false;
}
bool checkBrackets(string &s, string t, int i)
{
    if(i==s.size())
        return true;
    if(s[i]=='(' || s[i] == '[' || s[i] == '{')
    {
        t.push_back(s[i]);
        return checkBrackets(s, t, i+1);
    }    
    else if(check(t.back(), s[i]))
    {
            t.pop_back();
            return checkBrackets(s, t, i+1);
    }
    return false;
}
int main()
{
    string s = "([{}]{}())";
    string t = "";
    if (checkBrackets(s, t, 0))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}