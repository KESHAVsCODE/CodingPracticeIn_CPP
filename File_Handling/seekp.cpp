#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    char ch;
    fout.open("hello.txt",ios::ate);
    cout<<fout.tellp();
    fout.seekp(4);
    cout<<fout.tellp();
    fout<<"school";
    fout.seekp
    fout<<"";
    fout.close();
}
