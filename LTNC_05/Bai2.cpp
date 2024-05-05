#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
