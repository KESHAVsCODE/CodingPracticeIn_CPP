#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    int x=10,y=20;
    vector<int*> v;
    v.push_back(&x);
    v.push_back(&y);

    int **t = &v[0];
    for(int i=0;i<v.size();i++)
    {
        cout<<(t[i][0])<<" ";
    }


    return 0;
}
