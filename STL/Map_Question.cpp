#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void printMap(auto um)
{
    for(auto &a : um)
        cout<<a.first<<" "<<a.second<<endl;
}
bool duplicate2(vector<int> v,int k)
{
    unordered_map<int,int> um;            // In unordered map all operation will be done in O(1);
    for(int i=0 ; i < v.size() ; i++)
    {
        auto it = um.find(v[i]);
        if(it == um.end())
            um.insert({v[i],i});
        else
        {
            if(abs(i - (it->second) <= k))
               return true;
            else
                it->second = i;
        }
    }
    printMap(um);
    return false;
}
int main()
{
    vector<int> v = {1,0,1,1};
    cout<<duplicate2(v,1);

    return 0;
}

