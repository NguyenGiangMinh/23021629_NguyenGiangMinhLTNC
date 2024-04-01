#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p)
{
    if(n%2==0 && p%2==0)
    {
        int i=p/2;
        int j=(n-p)/2;
        if(i>j)
        {
            return j;
        }else if(i<j)
        {
            return i;
        }else
        {
            return j;
        }
    }else if(n%2==0 && p%2!=0)
    {
        int i=(p-1)/2;
        int j=(n-p+1)/2;
        if(i>j)
        {
            return j;
        }else if(i<j)
        {
            return i;
        }else
        {
            return j;
        }
    }else if(n%2!=0 && p%2==0)
    {
        int i=p/2;
        int j=(n-p)/2;
        if(i>j)
        {
            return j;
        }else if(i<j)
        {
            return i;
        }else
        {
            return j;
        }
    }else if(n%2!=0 && p%2!=0)
    {
        int i=(p-1)/2;
        int j=(n-p)/2;
        if(i>j)
        {
            return j;
        }else if(i<j)
        {
            return i;
        }else
        {
            return j;
        }
    }
    return 0;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<pageCount(n,p);


    return 0;
}
