#include <bits/stdc++.h>
using namespace std;

int main()
{
   int Q;
   cin>>Q;
   set<int> s;
   vector <string> ss;
   while(Q--)
   {
      int y,x;
      cin>>y>>x;
      if(y==1)
      {
         s.insert(x);
      }else if(y==2 && s.count(x)!=0)
      {
         s.erase(x);
      }else if(y==3)
      {
         if(s.count(x)!=0)
         {
            ss.push_back("Yes");
         }
         else
         {
            ss.push_back("No");
         }
      }
   }
   for(auto x:ss)
   {
      cout<<x<<endl;
   }
   return 0;
}

