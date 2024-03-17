#include <bits/stdc++.h>

using namespace std;

bool checkHackerRank(string s, string str)
{
    int i=0,j=0;
    while (i<s.size() && j<str.size())
    {
        if(s[i]==str[j])
        {
            i++;
            j++;
        }else
        {
            i++;
        }
    }
    if(j==str.size())
    {
        return true;
    }else
    {
        return false;
    }
}


int main()
{
    vector <string> arr;
    int T;
    cin>>T;
    cin.ignore();
    string str="hackerrank";
    while(T>0)
    {
        string s;
        getline(cin,s);
        if(checkHackerRank(s,str)==1)
        {
            arr.push_back("YES");
        }else
        {
            arr.push_back("NO");
        }
        T--;
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }


    return 0;
}


