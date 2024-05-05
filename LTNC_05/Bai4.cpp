#include <bits/stdc++.h>

using namespace std;


int main() {
    int N,Q;
    cin>>N;
    vector <int> s;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    cin>>Q;
    vector <string> ss;
    vector <int> sss;
    while (Q--)
    {
        int X;
        cin>>X;
        auto it=lower_bound(s.begin(),s.end(),X);
        int a=(it-s.begin())+1;
        if(it!=s.end() && *it==X)
        {
           ss.push_back("Yes");
           sss.push_back(a);
        }
        else
        {
           ss.push_back("No");
           sss.push_back(a);
        }
    }
    for(int i=0;i<ss.size();i++)
    {
       cout<<ss[i]<<" "<<sss[i]<<endl;
    }
    return 0;
}

