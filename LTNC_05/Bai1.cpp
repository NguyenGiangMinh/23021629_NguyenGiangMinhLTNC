#include <bits/stdc++.h>
using namespace std;
void Pointer(int* a, int* b)
{
    cout<<*a+*b<<endl;
    cout<<abs(*a-*b)<<endl;
}
int main() {
    int a,b;
    cin>>a>>b;
    Pointer(&a,&b);
    return 0;
}
