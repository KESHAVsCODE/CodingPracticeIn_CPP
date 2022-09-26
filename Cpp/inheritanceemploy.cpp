#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class person
{
private:
    int age;
    char name[20];
    int  mn;
protected:
    void setname(char *p)
    {
        strcpy(name,p);
    }
    void setage(int x)
    {
        age=x;
    }

    void setmobileno(int n)
    {
        mn=n;
    }
public:
    char* getname()
    {
        return (name);
    }
    int getage()
    {
        return age;
    }
    int getmobileno()
    {
        return (mn);
    }
};
class employ:public person
{
private:
    char emailid[30];
    float salary;
protected:
    void setemailid(char *e)
    {
        strcpy(emailid,e);
    }
    void setsalary(float s)
    {
        salary=s;
    }
public:
    char* getemailid()
    {
        return emailid;
    }
    float getsalary()
    {
        return salary;
    }
    void setemploy(char *ch,int age,int mo,float salary,char *em)
    {
        setname(ch);
        setage(age);
        setmobileno(mo);
        setsalary(salary);
        setemailid(em);
    }
    void getemploy()
    {
        cout<<"NAME:"<<getname()<<"\nAGE:"<<getage()<<"\nMOBILE NO.:"<<getmobileno()<<"\nSALARY:"<<getsalary()<<"\nEMAIL ID:"<<getemailid()<<endl;
    }
};
int main()
{
    employ ep;
    ep.setemploy("keshav",20,9057588629,150000.00,"keshavchamria@gamil.com");
    ep.getemploy();
}

