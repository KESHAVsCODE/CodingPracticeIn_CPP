#include<iostream>
#include<vector>
#include<unordered_map>
#include<conio.h>
#include<string>
using namespace std;
int searchIndex(vector<int> &v,int l,int h,int data)
    {
        int mid;
        if(v[h]<=data)
            return -1;
        while(h-l>1)
        {
            mid = (l+h)/2;
            if(v[mid]<=data)
                l=mid+1;
            else
                h=mid;
        }
        if(v[l]>data)
            return v[l];
        else
            return v[h];
    }
    bool isSubsequence(string s, string t) {
        unordered_map<char,vector<int>> um;
        int Index = -1;
        for(int i=0; i<t.size(); i++)
            um[t[i]].push_back(i);
        getch();
        for(auto &p: um)
        {
            cout<<p.first<<"->";
            for(auto t: p.second)
                cout<<t<<" ";
            cout<<endl;
        }
        cout<<s;
        getch();
        for(int i=0; i<s.size(); i++)
        {
            auto it = um.find(s[i]);
            if(it==um.end())
                return false;
            else
            {
                int k = searchIndex(it->second,0,it->second.size()-1,Index);
                cout<<k<<endl;
                getch();
                if(k==-1)
                    return false;
                else{
                    Index = k;
                }
            }
        }
        return true;
    }
int main()
{
    string s1 = "aaaaaa";
    string s2 = "bbaaaa";
    cout<<(bool)isSubsequence(s1,s2);
    return 0;
}
