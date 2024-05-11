#include <bits/stdc++.h>

using namespace std;

int cnt=0;

void powerSum(int X, int N, int j)
{
   if(X==0)
   {
      cnt++;
      return;
   }

   for(int i=j; pow(i,N)<=X;i++)
   {
      powerSum(X-pow(i,N),N,i+1);
   }
}

int main()
{
   int X,N;
   cin>>X>>N;
   int j=1;
   powerSum(X, N, 1);
   cout<<cnt<<endl;
   return 0;
}
