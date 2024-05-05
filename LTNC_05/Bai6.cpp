#include <bits/stdc++.h>

using namespace std;

int main()
{
   int Q;
   cin>>Q;
   map<string,int> mp;
   vector<int> v;
   while(Q--)
   {
      int type,Y;
      string X;
      cin>>type>>X;
      if(type==1)
      {
         cin>>Y;
      }
      if(type==1)
      {
         if(mp.count(X)==0)
         {
            mp[X]=Y;
         }
         else
         {
            mp[X]+=Y;
         }
      }else if(type==2 && mp.count(X)==1)
      {
         mp[X]=0;
      }else if(type==3 && mp.count(X)==1)
      {
         v.push_back(mp[X]);
      }else if(type==3 && mp.count(X)==0)
      {
         v.push_back(0);
      }
   }
   for(auto x:v)
   {
      cout<<x<<endl;
   }
   return 0;
}

