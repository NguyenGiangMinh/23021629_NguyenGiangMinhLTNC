#include <bits/stdc++.h>

using namespace std;

void CaesarCipher(int n, string& str, int k)//chuyền vào địa chỉ
{
    for(char& c:str)
    {
        if(isalpha(c))
        {
            char base=isupper(c)?'A':'a';
            c=base+(c-base+k)%26;
        }
    }
    cout<<str<<endl;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    CaesarCipher(n,str,k);
    return 0;
}
