#include <bits/stdc++.h>

using namespace std;

int EqualizeTheArray(int arr[],int n )
{
    map <int,int> tansuat;
    for(int i=0;i<n;i++)
    {
        tansuat[arr[i]]++;
    }
    vector <int> arrayy;
    for( auto x=tansuat.begin();x!=tansuat.end();x++)
    {
        arrayy.push_back(x->second);
    }
    int l=arrayy.size();
    sort(arrayy.begin(),arrayy.end());
    return n-array[l-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<EqualizeTheArray(arr,n)<<endl;
    return 0;
}
