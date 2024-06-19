#include <bits/stdc++.h>
using namespace std;

void Reverse( int a[], int n)
{
   int l=0,r=n-1;
   while(l<r)
   {
      int tmp=a[l];
      a[l]=a[r];
      a[r]=tmp;
      ++l; --r;
   }
}
//a>b
void add( char a[], char b[])
{
   int n1=strlen(a);
   int n2=strlen(b);
   int n=0;
   int x[n1],y[n1],z[n1+1];
   for( int i=0;i<n1;i++)
   {
      x[i]=a[i]-'0';
   }
   for( int i=0;i<n2;i++)
   {
      y[i]=b[i]-'0';
   }
   Reverse(x,n1);
   Reverse(y,n2);
   for( int i=n2;i<n1;i++)
   {
      y[i]=0;
   }
   int nho=0;
   for( int i=0;i<n1;i++)
   {
      int tmp=x[i]+y[i]+nho;
      z[n++]=tmp%10;
      nho=tmp/10;
   }
   if(nho)
   {
      z[n++]=nho;
   }
   for(int i=n-1;i>=0;i--)
   {
      cout<<z[i];
   }
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      char c[1001],d[1001];
      cin>>c>>d;
      if(strlen(c)>=strlen(d)) add(c,d);
      else add(d,c);
      cout<<endl;
   }
   return 0;
}
