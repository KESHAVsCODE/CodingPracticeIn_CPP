
//MAP->

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;          //Ordered Map
    string a;
    int b;
//    m["keshav"] = 24;
//    m["ajay"]   = 12;
    for(int i=0 ; i<4 ;i++)
    {
        cin>>a>>b;
        m.insert({a,b}); // when we try to update key pair value through insert() then it does not update key ,to update key use []operator -> m[a] = b;
    }

    for(auto &p : m)
    cout<<p.first<<" "<<p.second<<endl;

    cout<<endl;
    auto t1 = m.begin();      //map<string,int> :: iterator t1 = m.begin();
    for(; t1 != m.end(); t1++)
        cout<<t1->first<<" "<<t1->second<<endl;
    return 0;
}

