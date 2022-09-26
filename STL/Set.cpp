
//SET-> set only contain unique key value;    // Implementation -> Red Black Tree;
//      default set stores data in sorted order
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
    set<string> s; //set<Key> key->container,data type;
    s.insert("abs");// TC = O(log(n));       // set don't have access of []operator
    s.insert("kyc");
    s.insert("abd");
    s.insert("abb");
    s.insert("aaa");

    printSet(s);

    auto it = s.find("kyc");// O(log(n));

    s.erase(it);//s.erase("kyc") // O(log(n));

    printSet(s);

    return 0;
}
