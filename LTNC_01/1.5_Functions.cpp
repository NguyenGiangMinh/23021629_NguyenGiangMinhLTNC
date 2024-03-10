#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int maax;
    maax=max(a,max(b,max(c,d)));
    return maax;
}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}

