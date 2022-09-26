#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("u.txt",ios::ate);
    cout<<fout.seekg(11);
    fout<<"HANUMANGARH";
}
