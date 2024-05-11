#include <bits/stdc++.h>

using namespace std;

bool Binary_Search(int a[], int left, int right, int x)
{
   while(left<=right)
   {
      int mid=(left+right)/2;
      if(a[mid]==x)
      {
         return true;
      }else if(a[mid]<x)
      {
         left=mid+1;
      }
      else
      {
         right=mid-1;
      }
   }
   return false;
}

int main()
{
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }

   int x;cin>>x;

   sort(a,a+n);

   if(Binary_Search(a,0,n-1,x))
   {
      cout<<"YES"<<endl;
   }
   else
   {
      cout<<"NO"<<endl;
   }
   return 0;
}
