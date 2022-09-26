#include<iostream>
using namespace std;
int main()
{
    pair <int,string> s1;
    pair <int,string> s2;

    s1=make_pair(24,"keshav");//s1 = {12,"kesahv"};
    s2=make_pair(12,"mahesh");//s2 = {12,"mahesh"};

    s1.swap(s2);

    cout<<s1.first<<ends<<s1.second<<endl;



//     std::pair<int,string> foo (10,"mahesh");
//     std::pair<int,string> bar (90,"keshav");
//
//     foo.swap(bar);
//
//  std::cout << "foo contains: " << foo.first;
//  std::cout << " and " << foo.second << '\n';




//    pair <int,string> p1,p2;
//    pair <float,string> p3;    // we can deal with any combination of data types also non primitive
//    //pair <string, student>p3
//
//    p1=make_pair(24,"keshav");
//    p2=make_pair(24.4f,"mahesh");
//
//    cout<<"first pair -> "<<p1.first<<ends<<p1.second<<endl;
//    cout<<"second pair -> "<<p2.first<<ends<<p2.second<<endl;
    return 0;
}
