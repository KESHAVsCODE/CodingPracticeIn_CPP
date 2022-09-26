#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("hello.txt");

    cout<<fin.tellg();
    fin.seekg(11,ios_base::beg);
    cout<<" "<<fin.tellg();
    ch=fin.get();
    cout<<" "<<ch<<endl;

    fin.seekg(4,ios_base::cur);
    cout<<fin.tellg();
    ch=fin.get();
    cout<<ch<<endl;

    fin.seekg(-9,ios_base::end);
    cout<<fin.tellg();
    ch=fin.get();
    cout<<ch<<endl;
}
