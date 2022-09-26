#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> v = {10,5,16,10,9,4};
    unordered_map<int,unordered_map<int,int>> m; //MapOfMap and MultiMap not same
    for(int i=0 ;i<v.size();i++)
    m[v[i]][i]++;
    auto it = m.begin();
    m[v[3]][3] = 2;
    for(auto &p:m){
    cout<<p.first<<" ";
    auto t = p.second.begin();
    for(;t!=p.second.end();t++)
    {
        cout<<t->first<<" "<<t->second<<endl;
    }
    }
//    for(int i=0 ;i<v.size();i++)
//        cout<<m[v[i]][i]<<endl;

    return 0;
}
