#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int M,N; 
void get_Unique_Path(string temp, vector<vector<int>> &track, int r, int c, vector<string> &ans, vector<vector<int>> path, int steps)
{
    if(r==M-1 && c==N-1)
    {
        path[r][c]=steps;
        ans.push_back(temp);
        cout<<"PATH->"<<ans.size()<<" : "<<temp<<endl;

        for(auto &x: path)
        {
            cout<<'['<<" ";
            for(auto y: x)
                cout<<y<<" ";
            cout<<']'<<endl;
        }
        cout<<endl;    
        return;
    }
    track[r][c]=1;
    path[r][c]=steps;
    if(r<M-1 && track[r+1][c]==0) //Down
    {
        temp.push_back('D');
        get_Unique_Path(temp, track, r+1, c, ans, path, steps+1);
        temp.pop_back();
    }
    if(c<N-1 && track[r][c+1]==0) //Right
    {
        temp.push_back('R');
        get_Unique_Path(temp, track, r, c+1, ans, path, steps+1);
        temp.pop_back();
    }
    if(r>0 && track[r-1][c]==0) //Up
    {
        temp.push_back('U');
        get_Unique_Path(temp, track, r-1, c, ans, path, steps+1);
        temp.pop_back();
    }
    if(c>0 && track[r][c-1]==0) //Left
    {
        temp.push_back('L');
        get_Unique_Path(temp, track, r, c-1, ans, path, steps+1);
        temp.pop_back();
    }
    track[r][c]=0;
}
int main()
{
    M=4; N=4;
    vector<vector<int>> track(M, vector<int>(N, 0));
    vector<vector<int>> path = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans;
    string temp="";
    int r=0,c=0;
    get_Unique_Path(temp, track, r, c, ans, path, 1);
    cout<<endl<<"->";
   for(auto &str: ans)
        cout<<str<<" ";
   return 0;
}