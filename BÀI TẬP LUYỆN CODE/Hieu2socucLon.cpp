#include <bits/stdc++.h>
using namespace std;

string dao( string a )
{
   reverse(a.begin(),a.end());
   return a;
}

string hieu( string a, string b )
{
   a=dao(a), b=dao(b);
   string s="";
   int x=a.size(), y=b.size();
   for( int i=0; i<x-y;i++) b=b+'0';
   int t=0, vay=0;
   for(int i=0; i<x; i++)
   {
      t=a[i]-b[i]-vay;
      if(t<0)
      {
         t+=10;
         vay=1;
      }
      else
      {
         vay=0;
      }
      s+=char(t+'0');
   }
   s=dao(s);
   return s;
}

int main()
{
   string a,b;
   cin>>a>>b;
   if(a.size()>b.size())
   {
      cout<<hieu(a,b)<<endl;
   }else if(a.size()<b.size())
   {
      cout<<hieu(b,a)<<endl;
   }
   else
   {
      if(a>b)
      {
         cout<<hieu(a,b)<<endl;
      }
      else
      {
         cout<<hieu(b,a)<<endl;
      }
   }
   return 0;
}
