#include<iostream>//TESCH DOSE
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    vector<vector<int>> OG={{0,1,0,0}, {0,0,0,0}, {1,0,1,0}, {0,0,0,0}};
    int m = OG.size();
    int n = OG[0].size();
    vector<vector<int>> out(m, vector<int> (n,0));
    for(int i=0; i<n; i++)
        if(OG[0][i]==0) out[0][i]=1;
        else break;

    for(int i=0; i<m; i++)
        if(OG[i][0]==0) out[i][0]=1;
        else break;

    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(OG[i][j]!=1)
                out[i][j]=out[i-1][j]+out[i][j-1];
            else
                out[i][j]=0;
        }
    }
    return out[m-1][n-1];

    return 0;
}
