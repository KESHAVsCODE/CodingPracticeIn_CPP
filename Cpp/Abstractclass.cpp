#include<iostream>
#include<string.h>
using namespace std;
class person
{
private:
    int mo;
    char name[20];
public:
    virtual void setname(char*)=0;
    void setmo(int m)
    {
        mo=m;
    }
    int getmo()
    {
        return mo;
    }
};
class student:public person
{
private:
    int rollno;
    char name[20];
public:
    void setname(char *n)
    {
        strcpy(name,n);
    }
    char* getname()
    {
        return (name);
    }
    void setroll(int r)
    {
        rollno=r;
    }
    int getroll()
    {
        return rollno;
    }
    void setstudentinfo(char *na,int r,int m)
    {
        setname(na);
        setroll(r);
        setmo(m);
    }
    void printstudent()
    {
        cout<<"NAME = "<<getname()<<"\nROLL NO = "<<getroll()<<"\nMOBILE NO = "<<getmo()<<endl;
    }
};
class faculty:public person
{
private:
    float salary;
    char name[20];
public:
    void setname(char *n)
    {
        strcpy(name,n);
    }
    char* getname()
    {
        return (name);
    }
    void setsalary(float s)
    {
        salary=s;
    }
    float getsalary()
    {
        return salary;
    }
    void setfacultyinfo(char *na,float sa,int fmo)
    {
        setname(na);
        setsalary(sa);
        setmo(fmo);
    }
    void printfaculty()
    {
        cout<<"NAME = "<<getname()<<"\nSALARY = "<<getsalary()<<"\nMOBILE NO = "<<getmo();
    }
};
int main()
{
    student s;
    faculty f;
    s.setstudentinfo("keshav",24,90575886);
    s.printstudent();
    f.setfacultyinfo("rakesh",15000.00,9460265);
    f.printfaculty();
}
