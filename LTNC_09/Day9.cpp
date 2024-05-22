#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    long long T;
    cin>>T;
    cin.ignore();
    map <string,int> mp;
    vector <string> v;
    while(T--)
    {
        string name;
        int sdt;
        cin>>name>>sdt;
        mp[name]=sdt;
    }
    string s;
    while(cin>>s)
    {
        v.push_back(s);
    }
    for(auto c:v)
    {
        if(mp.count(c)==1)
        {
            cout<<c<<"="<<mp[c]<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
