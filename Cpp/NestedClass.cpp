#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    int rn;
    string name;
    class Address
    {
        private:
            string street;
            string area;
            int    ward;
            int    pincode;
        public:
            void allocateAddress(string street,string area,int ward,int pincode)
            {
                this->street=street;
                this->area=area;
                this->ward=ward;
                this->pincode=pincode;
            }
            int showAddress()
            {
                cout<<street<<ends<<area<<ends<<ward<<ends<<pincode;
                return 0;
            }
    };
    Address add;
    public:
        void setRN(int rn)
        {
            this->rn=rn;
        }
        void setName(string name)
        {
            this->name=name;
        }
        void setAddress(string street,string area,int ward,int pincode)
        {
            add.allocateAddress(street,area,ward,pincode);
        }
        void showStudent()
        {
            cout<<rn<<name<<add.showAddress();
        }
};
int main()
{
    Student s;
    s.setRN(24);
    s.setName("keshav chamria");
    s.setAddress("kharliya road","near goverment hospital",12,335803);
    s.showStudent();
    return 0;
}
