#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("hello.txt");
    ch=fin.get();
    while(!fin.eof()){
    cout<<ch;
    ch=fin.get();
    }
    fin.close();
}
