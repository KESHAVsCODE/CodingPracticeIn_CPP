#include<iostream>// BackToBack SWE
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
    void validBrackets(string t, vector<string> &vs, int n, int L, int R)
    {
        if(t.size()==n+n)
        {
            vs.push_back(t);
            return;
        }
        if(L>0)
        {
            t.push_back('(');
                validBrackets(t, vs, n, L-1, R);
            t.pop_back();
        }
        if(L-R!=0){
            t.push_back(')');
                validBrackets(t, vs, n, L, R-1);
        }
    }
int main()
{
    int n;
        cin>>n;
        vector<string> vs;
        string t;
        int L=n,R=n;
        validBrackets(t, vs, n, L, R);
        for(auto &x: vs)
            cout<<x<<endl;


    return 0;
}

