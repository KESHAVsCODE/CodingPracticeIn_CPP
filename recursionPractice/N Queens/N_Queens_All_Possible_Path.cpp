#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N;
bool isSafePosition(int r, int c, vector<vector<int>> &track)
{
    for(int i=r, j=c; i>=0 && j>=0; i--,j--)   // find queen position in upper left Diagonal 
        if(track[i][j]==1)
            return false;               // if queen found return false
    
    for(int i=r, j=c; i>=0; i--)       //  find queen position in upper vertical columns
        if(track[i][j]==1)
            return false;

    for(int i=r, j=c; i>=0 && j<=track.size()-1; j++,i--) // find queen position in upper right Diagonal
        if(track[i][j]==1)
            return false;
    return true;                       // if queen not found return true
}
void queens_Paths(vector<pair<int, int>> &temp, int r, vector<vector<int>> &track, vector<vector<pair<int,int>>> &ans)
{
    if(r==N+1)
    {
        ans.push_back(temp);
        return;        
    }
    for(int c=0; c<=N; c++)
    {
        if(isSafePosition(r, c, track)){
            temp.push_back({r,c});
            track[r][c]=1;
            
            queens_Paths(temp, r+1, track, ans);
            
            temp.pop_back();
            track[r][c]=0;
        }
    }
}
int main()
{
    N=9;
    vector<vector<pair<int,int>>> ans; 
    vector<vector<int>> track(N+1, vector<int>(N+1, 0)); 
    vector<pair<int,int>> temp;

    queens_Paths(temp, 0, track, ans);

    for(auto &it: ans)
    {
        cout<<'['<<" ";
        for(auto &p: it)
        {
            cout<<"{"<<p.first<<" "<<p.second<<"}, ";
        }
        cout<<']'<<endl;
    }
   return 0;
}