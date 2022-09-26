#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v(4);

    cout<<v.capacity()<<endl;

    v.assign(4,100);
    cout<<v.capacity()<<endl;

    v.push_back(101);
    cout<<v.capacity()<<endl;

    v.assign(4,'a');
    cout<<v.capacity()<<endl;
    for(int i: v)
        cout<<i<<" ";
    return 0;
}
