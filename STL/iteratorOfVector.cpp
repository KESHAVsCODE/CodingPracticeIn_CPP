#include<iostream>
#include<vector>
using namespace std;
int main()
{
//    vector<int> v = {1,2,3,4};
//    vector<int> :: iterator it = v.begin();
//    for(;it != v.end();it++)
//        cout<<(*it)<<" ";

    vector<pair<int,int>> p1;

    int a,b;
    for(int i=0;i<3;i++){
                                  // 1 // cin>>a>>b; // p1.push_back({0,0}); // p1[i].first = a; // p1[i].second = b;
        cin>>a>>b;
                                 // 2 // p1.push_back({0,0}); // cin>>p1[i].first>>p1[i].second;
       p1.push_back({a,b});     // 3 //  p1.push_back(make_pair(a,b));
    }

    auto t2 = p1.begin();              //    vector<pair<int,int>> ::iterator t2 = p1.begin();
    for(;t2 != p1.end();t2++)
        cout<<(*t2).first<<" "<<(*t2).second<<endl;   // cout<<t2->first<<" "<<t2->second<<endl;

    return 0;
}
