#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int N;
    vector<string> findPath(vector<vector<int>> &m, int n) {
        N = n-1;
        vector<string> ans;
        string temp;
        vector<vector<int>> track(n, vector<int>(n, 0));
        get_Unique_Path(temp, 0, 0, track, m, ans);
        return ans;
    }
    void get_Unique_Path(string temp, int r, int c, vector<vector<int>> &track, vector<vector<int>> &m, vector<string> &ans)
    {
        if(m[r][c]==0)
            return;
        if(r==N && c==N)
        {
            ans.push_back(temp);
            return;
        }
        track[r][c]=1;
        if(r<N && track[r+1][c]==0)
        {
            temp.push_back('D');
            get_Unique_Path(temp, r+1, c, track, m, ans);
            temp.pop_back();
        }
        if(c<N && track[r][c+1]==0)
        {
            temp.push_back('R');
            get_Unique_Path(temp, r, c+1, track, m, ans);
            temp.pop_back();
        }
        if(r>0 && track[r-1][c]==0)
        {
            temp.push_back('U');
            get_Unique_Path(temp, r-1, c, track, m, ans);
            temp.pop_back();
        }
        if(c>0 && track[r][c-1]==0)
        {
            temp.push_back('L');
            get_Unique_Path(temp, r, c-1, track, m, ans);
            temp.pop_back();
        }
        track[r][c]=0;
    }
};

int main()
{
    Solution first;
    vector<string> ans;
/*     vector<vector<int>> m = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {0, 1, 1, 1}};*/
    vector<vector<int>> m = {{1,0},{1,0}};
    ans = first.findPath(m ,2);

    for(auto &x: ans)
        cout<<x<<" ";
}
