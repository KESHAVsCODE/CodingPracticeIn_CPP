#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void bubbleSort(string &v, int i,int n)
{
    if(n==0)
        return;
    if(i<n)
    {
        if(v[i]>v[i+1])
            swap(v[i],v[i+1]);
        bubbleSort(v, i+1, n);
    }
    else
        bubbleSort(v, 0, n-1);
}
int main()
{
    string v = "okpwovbnplshnzafunqglnpjvwddvdlmjjyzmwwxzjckmaptilrbfpjxiarmwalhbdjiwbaknvcqovwcqiekzfskpbhgxpyomekqvzpqyirelpadooxjhsyxjkfqavbaoqqvvknqryhotjritrkvdveyapjfsfzenfpuazdrfdofhudqbfnzxnvpluwicurrtshyvevkriudayyysepzqfgqwhgobwyhxltligahroyshfndydvffd";
    bubbleSort(v, 0, v.size()-1);
    for(auto x: v)
            cout<<x<<" ";
    return 0;
}
