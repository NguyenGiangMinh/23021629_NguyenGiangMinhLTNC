#include <bits/stdc++.h>

using namespace std;

int ucln(int n,int m)
{
    if(m==0)
    {
        return n;
    }
    return ucln(m,n%m);
}

int bcnn(int n,int m)
{
    return n*m/ucln(n,m);
}

int bcnnarr(int arr[],int n)
{
    int b=arr[0];
    for(int i=1;i<n;i++)
    {
        b=bcnn(b,arr[i]);
    }
    return b;
}

int soogiua(int arr[],int n,int a[],int m)
{
    int nhonhat=bcnnarr(arr,n);
    sort(a,a+m);
    int i=a[0]/nhonhat;
    int dem=0;
    int j=1;
    while(j<=i)
    {
        bool flag=true;
        for(int k=0;k<m;k++)
        {
            if(a[k]%(nhonhat*j)!=0)
            {
                flag=false;
            }
        }
        if(flag==true)
        {
            dem++;
        }
        j++;
    }
    return dem;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],a[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<soogiua(arr,n,a,m)<<endl;

    return 0;
}
