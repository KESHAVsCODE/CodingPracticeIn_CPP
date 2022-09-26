#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    int pos;
    char ch;
    fin.open("hello.txt");
    pos=fin.tellg();
    cout<<pos;
    while(!fin.eof()){
        fin.get();
        pos=fin.tellg();
        cout<<pos;
    }
}
