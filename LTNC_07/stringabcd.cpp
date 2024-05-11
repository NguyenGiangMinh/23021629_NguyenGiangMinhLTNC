#include <bits/stdc++.h>

using namespace std;

void sinh(vector<char>& ch, int l, string str)
{
   if(l==0)
   {
      cout<<str<<endl;
      return;
   }

   for(auto c : ch)
   {
      sinh(ch, l-1, str+c);
   }
}

int main()
{
   vector<char> ch={'a','b','c','d'};
   int l=3;
   string str="";
   sinh(ch, l, str);
   return 0;
}
