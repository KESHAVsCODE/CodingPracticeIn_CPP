#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    char *p;
    fin.open("hello.txt");
    fin>>p;
    cout<<p;
    fin.close();
}
