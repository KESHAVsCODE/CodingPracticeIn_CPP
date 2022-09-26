#include<iostream>
using namespace std;
class BOX
{
private:
    int l,b,h;
public:
    void setdimension(int l,int b,int h){
       this->l=l;this->b=b;this->h=h;
    }
    void showdimension()
    {
        cout<<"L="<<l<<" B="<<b<<" L="<<l;
    }

};
int main()
{
    BOX *p,smallbox;
    p=&smallbox;
    p->setdimension(30,2,2);
    p->showdimension();
}
