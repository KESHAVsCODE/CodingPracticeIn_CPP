#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> &v1)
{
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++)
            cout<<" "<<v1[i][j];
        cout<<endl;
    }
}
int main()
{
    vector<vector <int> > v;
    int row;
    cout<<"ENTER NUMBER OF ROWS";
    cin>>row;
    for(int i=0;i<row;i++){
        vector<int> temp;         // v.push_back(vector<int> ()) // insert empty vector
            for(int j=0;j<row;j++)//  for(int j=0;j<row;j++){
            {                     //  int x;
            int x;                //  cin>>x;
            cin>>x;               //  v[j]=x;
            temp.push_back(x);    //}
            }
        v.push_back(temp);
    }
    print(v);

        v.pop_back();
    print(v);
    return 0;
}
