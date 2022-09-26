#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    int pos;
    fout.open("hello.txt",ios::app);
    pos=fout.tellp();
    cout<<pos;
}
