
// MultiSet -> it is same as set but it can stores the duplicate keys many times;
#include<iostream>
#include<set>
using namespace std;
void printSet(auto &s)
{
    for(auto &t: s)
    {
        cout<<t<<endl;
    }
}
int main()
{
    multiset<int> ms;
    ms.insert(10);       // ms[10]; -> error we cant use []operator in multiSet or unordered_multiset //error -> ms[10]=1;  multiMap or unordered_multimap
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    //ms.erase(10); // when we pass direct key int the erase function it will removes the all the duplicates keys with original key
    auto it = ms.find(10); // find function returns the iterator of first occurrence of the key
    ms.erase(it);          // when we pass iterator in the erase function it will remove only iterator position key not all duplicate key
    printSet(ms);
    return 0;
}
