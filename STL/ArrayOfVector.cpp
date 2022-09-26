#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v[3];       //major disadvantage is fix row
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            v[i].push_back(i);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
