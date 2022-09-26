#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    char ch;
    fout.open("hello.txt",ios::in);
   // fout<<"hello\nmy\nname\nis\nkeshav";
    ch=fout.get();
    while(!fout.eof()){
        cout<<ch;
        ch=fout.get();
    }
    fout.close();
}
