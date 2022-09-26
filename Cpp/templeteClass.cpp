#include<stdio.h>
#include<iostream>
using namespace std;
template<class FILL>class put
{
private:
    struct arr
    {
        int cap;
        FILL *ar;
    };
    arr *p;
public:
    put(int capacity)
    {
        p=new arr;
        p->cap=capacity;
        p->ar=new FILL[p->cap];
    }
    void setarr(int index,FILL data)
    {
        if(index>=0&&index<=p->cap-1)
            p->ar[index]=data;
        else
            printf("array index out of range");
    }
    void showelement(int index,FILL &data)
    {
        if(index>=0&&index<=p->cap-1)
            data=p->ar[index];
        else
            printf("array index out of range");
    }
    void printarr()
    {
        for(int i=0;i<p->cap;i++){
            cout<<p->ar[i]<<endl;
        }
    }
};
int main()
{
    put <char>o(5);// denote karta hai ki object kis type kabanega
    o.setarr(0,'k');
    o.setarr(1,'l');
    o.setarr(2,'j');
    o.setarr(3,'h');
    o.setarr(4,'t');
    o.printarr();
}
