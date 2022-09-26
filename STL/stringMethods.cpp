#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string s = "keshav";
    s.insert(0,1,'a');
    s.erase(0);
//    string s = "keshav";
//    char t[] = "hello";
//    for(int i=0;t[i]; i++)
//        cout<<t[i];
//    string t = "hello";
//    string &r = t;
//    s.insert(0,r,1,2);
    cout<<s;
    return 0;
}
