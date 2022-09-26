#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("w.txt");
    fout<<"HELLO MAHESH";
    cout<<fout.tellp();
}
