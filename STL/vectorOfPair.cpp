#include<iostream>
#include<vector>
using namespace std;
void printPairOfVector(vector<pair<int,int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    int a,b,n;
    cin>>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
                                  // 1 // cin>>a>>b; // p1.push_back({0,0}); // p1[i].first = a; // p1[i].second = b;
        cin>>a>>b;
                                 // 2 // p1.push_back({0,0}); // cin>>p1[i].first>>p1[i].second;
       p.push_back({a,b});     // 3 //  p1.push_back(make_pair(a,b));
    }
    for(int i=1 ;i<p.size(); i++)
    {
        for(int j=1 ;j<p.size(); j++)
        {
            if(p[j].second<p[j-1].second)
            {
                swap(p[j],p[j-1]);
            }
        }
    }
    printPairOfVector(p);
    return 0;
}
