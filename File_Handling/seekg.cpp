#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("hello.txt");
    cout<<fin.tellg();
    ch=fin.get();
    cout<<ch;
    cout<<fin.tellg();
    ch=fin.get();
    cout<<ch;
    fin.seekg(4);
    ch=fin.get();
    cout<<ch;
    fin.seekg(9);
    ch=fin.get();
    cout<<ch;
}

