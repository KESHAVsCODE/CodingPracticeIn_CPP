#include<iostream>
#include<fstream>
using namespace std;
void copydata(char *f1,char *f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    if(fin.is_open())
        cout<<"file open"<<endl;
    else
        cout<<"file not open"<<endl;
    fout.open(f2);
    if(fout.is_open())
        cout<<"file open"<<endl;
    else
        cout<<"file not open"<<endl;
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
int main()
{
    copydata("file1.txt","fi1.txt");
}
