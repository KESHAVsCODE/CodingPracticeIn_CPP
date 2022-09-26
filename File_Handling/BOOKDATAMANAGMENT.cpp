#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class book
{
    int bookid;
    char title[20];
    float price;
public:
    book()
    {
        bookid=0;
        strcpy(title,"NO TITLE");
        price=0;
    }
    void set_book_info()
    {
        cout<<"ENTER BOOKID TITLE PRICE";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    }
    void show_book_info()
    {
        cout<<" "<<bookid<<" "<<title<<" "<<price<<endl;
    }
    int storbookdata();
    void printbookdata();
    void searchbookdata(char*);
    void deletebookdata(char*);
    void updaterecord(char*);
};
int book::storbookdata()
    {
        ofstream fout;
        fout.open("bookdata.dat",ios::app|ios::binary);
        if(bookid==0&&price==0){
            cout<<"NO DATA FOUND";
            return 0;
        }
        else{
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
        }
    }
void book::printbookdata()
{
    ifstream fin;
    fin.open("bookdata.dat",ios::in|ios::binary);
    if(fin.get()==-1){                         //if file exist but file is empty then get() return -1 and run if;
       cout<<"NO DATA FOUND";
       }
    else{

       fin.seekg(-1,ios::cur);                  //-----> after use get function pointer move to next position to recover the position use seekg
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            show_book_info();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}
void book::searchbookdata(char *t)
{
    ifstream fin;
    int c=0;
    fin.open("bookdata.dat",ios::in|ios::binary);
    if(!fin)
        cout<<"FILE NOT FOUND";
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(!strcmp(t,title)){
                show_book_info();
                c++;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(c==0)
            cout<<"NO RECORD FOUND";
        fin.close();
    }
}
void book::deletebookdata(char *t)
{
    ofstream fout;
    ifstream fin;
    fin.open("bookdata.dat",ios::in|ios::binary);
    if(!fin)
        cout<<"FILE NOT EXIST";
    else{
        fout.open("temp.dat",ios::out|ios::binary);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(strcmp(title,t))
                fout.write((char*)this,sizeof(*this));
            fin.read((char*)this,sizeof(*this));
        }
        fout.close();
        fin.close();
        remove("bookdata.dat");
        rename("temp.dat","bookdata.dat");
    }
}
void book::updaterecord(char *t)
{
    fstream file;
    file.open("bookdata.dat",ios::in|ios::out|ios::ate|ios::binary);
    if(!file)
        cout<<"FILE NOT EXIST";
    else
    {
        file.seekg(0);
        file.read((char*)this,sizeof(*this));
        while(!file.eof()){
            if(!strcmp(title,t)){
                set_book_info();
                file.seekp(file.tellp()-sizeof(*this));
                file.write((char*)this,sizeof(*this));
            }
            file.read((char*)this,sizeof(*this));
        }
        file.close();
    }
}
int menu()
{
    int choice;
    cout<<"PRESS 1. STOR BOOK RECORD\n";
    cout<<"PRESS 2. VIEW ALL BOOK RECORD\n";
    cout<<"PRESS 3. SEARCH BOOK RECORD\n";
    cout<<"PRESS 4. DELETE BOOK RECORD\n";
    cout<<"PRESS 5. UPDATE BOOK RECORD\n";
    cout<<"PRESS 6. EXIT\n";
    cout<<"\nENTER YOUR CHOICE\n";
    cin>>choice;
    return choice;
}
int main()
{
    book b1;
    char title[20];
    while(1){
        system("cls");
        switch(menu())
        {
            case 1:
                b1.set_book_info();
                b1.storbookdata();
                break;
            case 2:
                b1.printbookdata();
                getch();
                break;
            case 3:
                cout<<"\nENTER BOOK TITLE\n";
                cin.ignore();
                cin.getline(title,19);
                b1.searchbookdata(title);
                break;
            case 4:
                cout<<"\nENTER BOOK TITLE TO DELETE RECORD";
                cin.ignore();
                cin.getline(title,19);
                b1.deletebookdata(title);
                cout<<"RECORD DELETED";
                break;
            case 5:
                cout<<"\n ENTER BOOK TITLE TO UPDATE RECORD";
                cin.ignore();
                cin.getline(title,19);
                b1.updaterecord(title);
                break;
            case 6:
                cout<<"\nTHANK YOU";
                cout<<"\nPRESS ANY KEY FOR EXIT";
                getch();
                exit(0);
                break;
            default:
                cout<<"\nINVALID CHOISE";
        }
        getch();
    }
}
