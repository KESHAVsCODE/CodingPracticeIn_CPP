#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void giveMePathCount(string t, int m,int n)
{
    if(m==1 && n==1){
        cout<<t<<endl;
    }    
    if(m!=1){
        t.push_back('D');
        giveMePathCount(t, m-1, n);
        t.pop_back();
    }
    if(n!=1){
        t.push_back('R');
        giveMePathCount(t, m, n-1);
        t.pop_back();
    }
    if(m!=1 && n!=1)
    {
        t.push_back('C'); // C -> Diagonal
        giveMePathCount(t, m-1, n-1);
    }
}
int main()
{
    cout<<"Total Path -> \n";
    giveMePathCount("", 3, 3);
   return 0;
}