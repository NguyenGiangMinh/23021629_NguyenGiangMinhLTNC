#include <bits/stdc++.h>

using namespace std;

void printTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    printTriangle(n);
    return 0;
}
