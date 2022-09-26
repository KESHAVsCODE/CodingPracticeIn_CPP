#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string removeCharString(string input, int i)
{
    if(i==input.size())
        return "";
    char c=input[i];
    if(c=='a')
        return removeCharString(input,i+1);
    return c+removeCharString(input, i+1);
}
int main()
{
   string s1 = "keshav",s2="";
   
   cout<<removeCharString(s1, 0);;
   return 0;
}