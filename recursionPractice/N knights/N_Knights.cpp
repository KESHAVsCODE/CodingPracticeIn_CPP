#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafePosition(int i, int j, vector<vector<bool>> &track)
{
    if(i>0 && j>1)
        if(track[i-1][j-2]==1)
            return false;
    if(i>1 && j>0)
        if(track[i-2][j-1]==1)
            return false;
    if(i>1 && j<track.size()-1)
        if(track[i-2][j+1]==1)
            return false;
    if(i>0 && j<track.size()-2)
        if(track[i-1][j+2]==1)
            return false;
    return true;
}
void get_Knights_Positions(int knights, int row, int column, vector<pair<int, int>> &temp, vector<vector<bool>> &track, vector<vector<pair<int,int>>> &ans)
{
/*     if(knights==0)
    {
        ans.push_back(temp);
        return;
    }
    if(row == track.size()-1 &&  column == track.size())
        return;
    if(column==track.size())
    {
        get_Knights_Positions(knights, row+1, 0, temp, track, ans);
        return;
    }
    if(isSafePosition(row, column, track))
    {
        temp.push_back({row, column});
        track[row][column]=1;

        get_Knights_Positions(knights-1, row, column+1, temp, track, ans);

        temp.pop_back();
        track[row][column]=0;
    }
    get_Knights_Positions(knights, row, column+1, temp, track, ans); */

    if(knights==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int r = row; r<track.size(); r++)
    {
        for(int c = column; c<track.size(); c++)
        {
            if(isSafePosition(r, c, track))
            {
                temp.push_back({r, c});
                track[r][c]=1;
                
                get_Knights_Positions(knights-1, r, c+1, temp, track, ans);
                
                temp.pop_back();
                track[r][c]=0;
            }
        }
        column=0;
    }
}
int main()
{
    int n=4;
    vector<vector<pair<int,int>>> ans;
    vector<pair<int,int>> temp;
    vector<vector<bool>> track(n, vector<bool>(n, 0));

    get_Knights_Positions(n, 0, 0, temp, track, ans);
    for(auto &it: ans)
    {
        cout<<'['<<" ";
        for(auto &p: it)
        {
            cout<<"{"<<p.first<<" "<<p.second<<"}, ";
        }
        cout<<']'<<endl;
    }
    cout<<endl<<"Total Possible Ways->"<<ans.size()<<endl<<endl;
   return 0;
}