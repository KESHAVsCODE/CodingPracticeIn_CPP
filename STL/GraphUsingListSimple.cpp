#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
void DFS(vector<pair<int,int>> *v[])
{

}
int main()
{
    int E,V;
    cin>>V>>E;
    vector<pair<int,int>> v[V];
    int a,b,w;
    for(int i=0;i<E;i++)
    {
        cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    for(int i=0;i<V;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<v[i].size();j++)
            cout<<" "<<v[i][j].first<<" weight-> "<<v[i][j].second;
        cout<<endl;
    }


    return 0;
}
