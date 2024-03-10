#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);

    for (int i=0; i<arr.size(); i++) {

        cin>>arr[i];

    }

    int am=0;
    int duong=0;
    int khac=0;
    for (int i=0; i<arr.size(); i++) {

        if(arr[i]>0){
            duong++;
        }else if(arr[i]<0){
            am++;
        }else{
            khac++;
        }

    }
    double tong=duong+am+khac;
    double tl1=duong/tong;
    double tl2=am/tong;
    double tl3=khac/tong;
    cout<<setprecision(6)<<fixed<<tl1<<endl;
    cout<<setprecision(6)<<fixed<<tl2<<endl;
    cout<<setprecision(6)<<fixed<<tl3<<endl;

    return 0;
}



