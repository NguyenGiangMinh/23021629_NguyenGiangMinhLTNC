#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<string> kq;
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sumleft=0,sumright=0;
        bool check=false;
        for (int i=0; i<n; i++) {
            sumright+=a[i];
        }
        for (int i=0; i<n; i++) {
            if(i==0){
                sumleft=0;
                sumright-=a[0];
            }else{
                sumleft+=a[i-1];
                sumright=sumright-a[i];
            }
            if(sumright==sumleft){
                check=true;
            }
        }
        if(check){
            kq.push_back("YES");
        }else{
            kq.push_back("NO");
        }

    }
    for(int i=0;i<kq.size();i++){
        cout<<kq[i]<<endl;
    }

    return 0;
}



