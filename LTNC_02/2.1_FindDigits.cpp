#include <bits/stdc++.h>
using namespace std;

int FindDigits(string n)
{
    int cnt=0;
    for(int i=0;i<n.length();i++)
    {
        int a=n[i]-'0';
        int b=stoi(n);
        if(a!=0 && b%a==0){
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int T;
    cin>>T;
    vector <int> arr;
    for(int i=0;i<T;i++)
    {
        string s;
        cin>>s;
        arr.push_back(FindDigits(s));
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
