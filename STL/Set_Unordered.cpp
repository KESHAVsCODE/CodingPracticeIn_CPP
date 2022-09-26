#include<iostream>
#include<unordered_set>
using namespace std;
void printSet(unordered_set<int> &us)
{
    for(auto &a: us)
    {
        cout<<a<<endl;
    }
}
int main()
{
    unordered_set<int> us;
    us.insert(1);
    us.insert(0);
    us.insert(1);
    us.insert(2);
    us.insert(10);
    us.insert(3);
    auto it = us.begin();
    cout<<*(++it)<<"->";
    printSet(us);
    return 0;
}
