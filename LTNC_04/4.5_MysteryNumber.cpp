#include <bits/stdc++.h>

using namespace std;

void MysteryNumber(int arr[], int a[], int n, int m)
{
    vector <int> x(arr,arr+n);
    vector <int> y(a,a+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x[i]==y[j])
            {
                y.erase(y.begin()+j);
                break;
            }
        }
    }
    for(int s:y)
    {
        cout<<s<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n],a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n+1;i++)
    {
        cin>>a[i];
    }
    MysteryNumber(arr,a,n,n+1);
    return 0;
}
