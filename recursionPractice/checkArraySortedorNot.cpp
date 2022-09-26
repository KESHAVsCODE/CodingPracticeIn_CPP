#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<vector>
using namespace std;
bool checkArray(vector<int> &vs,int i)
{
    if(i==vs.size()-1)
        return true;
    if(vs[i]<vs[i+1])
        return checkArray(vs, i+1);
    return false;
}
int main()
{
    vector<int> vs={1,2,3,4,5,8};
    cout<<checkArray(vs,0);

    return 0;
}

