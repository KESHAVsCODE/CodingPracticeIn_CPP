#include<iostream>
#include<string.h>
using namespace std;
class mobile
{
private:
    char brand[20];
    char model[20];
    int ram,rom;
    float price;
public:
    mobile()
    {
        cout<<"NO  DATA FOUND\n";
    }

    void setbrand(char *b)
    {
        strcpy(brand,b);
    }
    void setmodel(char *m)
    {
        strcpy(model,m);
    }
    void setram(int ra)
    {
        ram=ra;
    }
    void setrom(int ro)
    {
        rom=ro;
    }
    void setprice(float pri)
    {
        price=pri;
    }

    char* getbrand()
    {
        return brand;
    }
    char* getmodel()
    {
        return model;
    }
    int getram()
    {
        return(ram);
    }
    int getrom()
    {
        return rom;
    }
    float getprice()
    {
        return(price);
    }
    void set_mobile_info(char *brand,char *model,int ram,int rom,float price)
    {
        setbrand(brand);
        setmodel(model);
        setram(ram);
        setrom(rom);
        setprice(price);
    }
    void get_mobile_info()
    {
        cout<<"\t\tBRAND"<<"\t\tMODEL"<<"\t\tRAM"<<"\t\tROM"<<"\t\tPRICE"<<endl<<endl;
        cout<<"\t\t"<<getbrand()<<"\t"<<getmodel()<<"\t\t"<<getram()<<"\t\t"<<getrom()<<"\t\t"<<getprice()<<endl <<endl;
    }
};
int main()
{
    mobile m1,m2;
    m1.setbrand("honor");
    cout<<m1.getbrand();
    cout<<m2.getbrand();
}
