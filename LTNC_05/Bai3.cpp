#include <bits/stdc++.h>
using namespace std;

int main() {
    int j;
    cin>>j;
    vector <int> arr;
    for(int i=0;i<j;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cin>>k;
    arr.erase(arr.begin()+k-1);
    int m,n;
    cin>>m>>n;
    arr.erase(arr.begin()+m-1,arr.begin()+n-1);
    cout<<arr.size()<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}

