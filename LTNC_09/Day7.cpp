#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void str(string s)
{
    string a="";
    string b="";
    for(int i=0;i<(int)s.length();i++)
    {
        if(i%2==0)
        {
            a+=s[i];
        }
        else
        {
            b+=s[i];
        }
    }
    cout<<a<<" "<<b<<endl;
}

int main() {
    int T;
    cin>>T;
    cin.ignore();
    vector<string> v;
    while(T--)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    for(auto c:v)
    {
        str(c);
    }
    return 0;
}

