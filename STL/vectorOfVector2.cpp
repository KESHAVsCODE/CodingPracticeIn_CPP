#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i=0 ;i>-1 ;i++)
    {
        vector<int> t;
        int n;
        int a;
        cout<<endl<<"Enter size of "<<i+1<<" row";
        cin>>n;
        cout<<endl<<"Enter the "<<i+1<<" first row element";
        for(int i=0 ;i>0 ;i++)
        {
            cin>>a;
            if(a==1000)
                break;
            t.push_back(a);
        }
        v.push_back(t);
    }
    for(int i=0 ;i<v.size(); i++)
    {
        for(int j=0 ;j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
