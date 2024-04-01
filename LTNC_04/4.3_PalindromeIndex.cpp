#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool palindrome(string& str)
{
    int so=str.length();
        for(int i=0;i<so/2;i++)
        {
            if(str[i]!=str[so-i-1])
            {
                return false;
            }
        }
    return true;


}

int fix(string& str)
{
    for(int i=0;i<(int)str.size();i++)
    {
        string temp=str;
        temp.erase(i,1);
        if(palindrome(temp)==1)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    while(T--)
    {
       string str;
       cin>>str;
       if(palindrome(str))
       {
          cout<<-1<<endl;
       }else
       {
          cout<<fix(str)<<endl;
       }
    }

    return 0;
}
