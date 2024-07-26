#include <bits/stdc++.h>

using namespace std;

//string dao( string s )
//{
//   string a="";
//   for( int i=0 ; i<s.size() ; i++)
//   {
//      a=s[i]+a;
//   }
//   return a;
//}

string dao(string a)
{
   reverse(a.begin(),a.end());
   return a;
}
string tong( string a, string b ) //(a>b)
{
   a=dao(a); //vidu 123456789 thanh 987654321
   b=dao(b);
   string s="";
   int x=a.size(), y=b.size(); //lay do dai cua 2 so
   a=a+'0'; //cong khong vao cuoi 9876543210 de cong lay du vao so dau
   for( int i=0; i<x-y+1; i++) b=b+'0'; //9876543210 size=9
   int t=0, du=0;                        //1234500000 size=5
   for( int i=0;i<=x;i++)                // thanh i<5 them 5 so 0 cho du
   {
      t=a[i]-'0'+b[i]-'0'+du;
      du=t/10;
      t%=10;
      s+=char(t+'0');
   }
   s=dao(s);
   if(s[0]=='0') s.erase(0,1);
   return s;
}

int main()
{
   string a;
   string b;
   cin>>a>>b;
   if(a.size()>b.size())
   {
      cout<<tong(a,b)<<endl;
   }else
   {
      cout<<tong(b,a)<<endl;
   }
   return 0;
}
