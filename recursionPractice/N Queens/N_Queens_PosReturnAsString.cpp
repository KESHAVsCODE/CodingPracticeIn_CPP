#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getQueensPositions(vector<string> &temp, int r, vector<vector<int>> &track, vector<vector<string>> &ans);
 vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> track(n, vector<int>(n, 0));
        vector<vector<string>> ans;
        vector<string> temp;
        getQueensPositions(temp, 0, track, ans);
        return ans;
    }
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
    void getQueensPositions(vector<string> &temp, int r, vector<vector<int>> &track, vector<vector<string>> &ans)
    {
        if(r==track.size())
        {
            ans.push_back(temp);
            return;
        }
        string str(track.size(), '.');
        for(int c=0; c<track.size(); c++)
        {
            if(isSafePosition(r, c, track))
            {
                track[r][c]=1;
                str[c]='Q';
                temp.push_back(str);
                
                getQueensPositions(temp, r+1, track, ans);
                
                track[r][c]=0;
                str[c]='.';
                temp.pop_back();
            }
        }
    }
int main()
{
    vector<vector<string>> ans = solveNQueens(3);

    for(auto &it: ans)
    {
        cout<<'['<<" ";
        for(auto &p: it)
        {
            cout<<p<<", ";
        }
        cout<<']'<<endl;
    }
   return 0;
}