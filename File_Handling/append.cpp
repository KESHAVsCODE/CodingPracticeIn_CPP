#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("a.txt",ios::app);
    fout<<"KESHAV";
    fout<<"mahesh";
}
