#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int M,N; 
void get_Unique_Path(string temp, vector<vector<int>> &track, int r, int c, vector<string> &ans)
{
    if(r==M-1 && c==N-1)
    {
        ans.push_back(temp);
        cout<<temp<<" ";
        return;
    }
    track[r][c]=1;
    if(r<M-1 && track[r+1][c]==0) //Down
    {
        temp.push_back('D');
        get_Unique_Path(temp, track, r+1, c, ans);
        temp.pop_back();
    }
    if(c<N-1 && track[r][c+1]==0) //Right
    {
        temp.push_back('R');
        get_Unique_Path(temp, track, r, c+1, ans);
        temp.pop_back();
    }
    if(r>0 && track[r-1][c]==0) //Up
    {
        temp.push_back('U');
        get_Unique_Path(temp, track, r-1, c, ans);
        temp.pop_back();
    }
    if(c>0 && track[r][c-1]==0) //Left
    {
        temp.push_back('L');
        get_Unique_Path(temp, track, r, c-1, ans);
        temp.pop_back();
    }
    track[r][c]=0;
}
int main()
{
    vector<vector<int>> track = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};
    vector<string> ans;
    string temp="";
    int r=0,c=0;
    cin>>M>>N;
    get_Unique_Path(temp, track, r, c, ans);
    cout<<endl<<"->";
   for(auto &str: ans)
        cout<<str<<" ";
   return 0;
}