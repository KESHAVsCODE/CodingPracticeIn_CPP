#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("r.txt");
    ch=fin.get();
    cout<<ch;
}
