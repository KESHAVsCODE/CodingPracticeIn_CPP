#include<iostream>
#include<bits/stdc++.h>
using namespace std;
static int m;
static int n;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)
            return 0;
        m=obstacleGrid.size()-1;
        n=obstacleGrid[0].size()-1;
        return uniquePath2(obstacleGrid, 0, 0);
    }
    int uniquePath2(vector<vector<int>>& OG,int i, int j)
    {
        if(i==m && j==n)
            return 1;
        int a=0,b=0;
        if(i<m && OG[i+1][j]!=1)
            a=uniquePath2(OG, i+1, j);
        if(j<n && OG[i][j+1]!=1)
            b=uniquePath2(OG, i, j+1);
        return a+b;
    }
int main()
{
   vector<vector<int>> OG={{0,1,0,0}, {0,0,0,0}, {1,0,1,0}, {0,0,0,0}};
   cout<<uniquePathsWithObstacles(OG);
   return 0;
}