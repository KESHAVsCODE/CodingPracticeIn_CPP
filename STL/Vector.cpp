#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> &v)
{
    cout<<endl;
    v[0] = 10;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector <int> v1 = {1,2,3,4,5};
    printVector(v1);
    cout<<endl<<v1[0];
    /*
    vector <int> :: iterator it;   // use "auto" keyword to declare iterator because it provides conviniency -> auto it=v1.begin();
    it=v1.begin();
    for(it=v1.begin();it!=v1.end();it++)
    cout<<*it<<" ";

//    v1.push_back(12);
//    for(int i=0;i<v1.size();i++)
//    cout<<" "<<v1[i];
    */
    return 0;
}
