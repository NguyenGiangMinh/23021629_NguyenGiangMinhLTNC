#include <bits/stdc++.h>

using namespace std;

string printTime(string s)
{
    string timebegin=s.substr(2,6);
    string hour=s.substr(0,2);
    int hours=stoi(hour);
    string word=s.substr(8,2);
    string time="";
    if(hours==12 && word=="AM")
    {
        time="00"+timebegin;

    }else if(word=="PM")
    {
        if(hours!=12)
        {
            hours+=12;
        }
        time=to_string(hours)+timebegin;
    }else
    {
        time=s.erase(8,9);
    }
    return time;
}

int main()
{
    string time;
    getline(cin,time);
    cout<<printTime(time)<<endl;
    return 0;
}
