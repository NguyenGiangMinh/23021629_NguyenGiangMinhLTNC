#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a;
    for(int i=0;i<n;i++)
    {
        vector<int> b;
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        a.push_back(b);
    }
    vector<int> m;
    for(int i=0;i<q;i++)
    {
        int c,d;
        cin>>c>>d;
        m.push_back(a[c][d]);
    }
    for(auto x:m)
    {
        cout<<x<<endl;
    }
    return 0;
}
