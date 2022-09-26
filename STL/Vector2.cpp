#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1 = {1,2,3,4,5};
    cout<<v1.capacity()<<ends<<v1.size()<<endl;

    v1.resize(3);
    v1.shrink_to_fit();
    cout<<v1.capacity()<<ends<<v1.size()<<endl;

    v1.push_back(6);
    cout<<v1.capacity()<<ends<<v1.size()<<endl;
    vector <int> :: iterator it;
    it=v1.begin();
    for(it=v1.begin();it!=v1.end();it++)
    cout<<*it<<" ";
    return 0;
}

