#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Apply in sorted data structure
//upper-bound-> it will return always next greater element pointer if present then also.  
int main()
{
    int a[] = {1,2,5,8};
    int  *it = upper_bound(a, a+3, 5);
    if(it == a+4)
    cout<<"not present";
    else
    cout<<(*it);
   return 0;
}
//we can also find next smaller element using upper or lower bound function
/* #include <algorithm>
#include <iostream>
#include <vector>
  
int main()
{
    int unsorted[10] = { 3, 3, 2, 1, 5, 5, 4, 3, 7, 8 };
    std::vector<int> v(unsorted, unsorted + 10);
  
    // sorting vector in non increasing order. Vector
    // becomes {8, 7, 5, 5, 4, 3, 3, 3, 2, 1}
    std::sort(v.begin(), v.end(), std::greater<int>());
  
    std::vector<int>::iterator low, up;
    low = std::lower_bound(v.begin(), v.end(), 3, std::greater<int>());         
    up = std::upper_bound(v.begin(), v.end(), 5, std::greater<int>());          
  
    std::cout << "lower_bound at position " << (low - v.begin()) << '\n';
    std::cout << "upper_bound at position " << (up - v.begin()) << '\n';
  
    return 0;
} */