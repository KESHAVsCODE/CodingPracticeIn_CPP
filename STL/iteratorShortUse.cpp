#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>> p1 = {{1,2},{3,4},{5,6}};

    for(auto value: p1)                   //for(pair<int,int>  value: p1) // value contain copy of pair
        cout<<value.first<<" "<<value.second<<endl;

    for(auto &value: p1){                   //for(pair<int,int> &value: p1) // value contain references of pair
        (value.first)++;
        cout<<value.first<<" "<<value.second<<endl;
    }



    return 0;
}
