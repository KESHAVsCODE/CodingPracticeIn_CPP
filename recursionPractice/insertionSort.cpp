#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v,int j,int k)
{
    if(k==v.size())
        return;
    if(j!=0 && v[j]<v[j-1])
        swap(v[j],v[j-1]);
    else
        return;
    insertionSort(v, j-1, k);
    insertionSort(v, k+1, k+1);
}
int main()
{
    vector<int> v = {5,1,3,2,7,5,1,3,2,7};
    int j=1,k=1;
    insertionSort(v, j, k);
    for (int i = 0; i < v.size(); i++)
    {
        /* code */cout<<v[i]<<" ";
    }
    
   return 0;
}