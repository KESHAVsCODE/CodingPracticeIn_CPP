#include<iostream>
#include<stdio.h>
using namespace std;
class matrix
{
private:
    int a[3][3];
public:
    int& operator ()(int x,int y)
    {
        return (a[x][y]);
    }
    void printmatrix()
    {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    }
};
int main()
{
    matrix m;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m(i,j);
        }
    }
    m.printmatrix();
}
