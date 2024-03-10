#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
