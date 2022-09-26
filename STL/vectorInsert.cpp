#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3}; vector<int> t={4,5,6,7,8,9};
    vector<int>::iterator it = v.begin();
    int j = 2, i = 4;
    it = v.begin()+j;
    cout<<*(it)<<endl;
    getch();
                             // we can also pass like this v.insert(v.begin()+j,t[i]);
    v.insert(it,t[i]);       // After inserting th element Iterator will be disturbed so that we must point iterator to begin again
    for(auto x: v)           // before perform operation using iterator.
        cout<<x<<" ";
    getch();

    it = v.begin()+j;
    cout<<*(it)<<" ";
    getch();

    v.erase((it));   // v.erase(v.begin()+j);
    for(auto x: v)
        cout<<x<<" ";
    return 0;
}
