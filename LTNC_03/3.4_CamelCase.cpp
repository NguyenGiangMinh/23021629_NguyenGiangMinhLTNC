#include <bits/stdc++.h>

using namespace std;

int camelCase(string s)
{
    int cnt=1;
    for(char c:s)
    {
        if(isupper(c))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string ress;
    getline(cin,ress);
    cout<<camelCase(ress)<<endl;
    return 0;
}
