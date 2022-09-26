#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
    void uniquePaths(vector<vector<int>> &Obsticals, string temp, vector<string> &ans, int m, int n,int i,int j) {
        if(i==m && j==n)
        {
            ans.push_back(temp);
            return;
        }
        if(i<m && Obsticals[i+1][j]!=1)
        {
            temp.push_back('D');
            uniquePaths(Obsticals, temp, ans, m, n, i+1, j);
            temp.pop_back();
        }
        if(j<n && Obsticals[i][j+1]!=1)
        {
            temp.push_back('R');
            uniquePaths(Obsticals, temp, ans, m, n, i, j+1);
        }
    }
int main()
{
    vector<string> ans;
    vector<vector<int>> Obsticals = {{0,0,0},{0,1,0},{0,0,0,}};
    string temp;
    int m,n;
    cin>>m>>n;
    uniquePaths(Obsticals, temp, ans, m-1, n-1, 0, 0);
    for(auto &x:ans)
        cout<<x<<endl;
    return 0;
}

