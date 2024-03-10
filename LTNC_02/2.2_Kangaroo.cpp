#include <bits/stdc++.h>
using namespace std;

void NumberLineJumps(double x1,double v1, double x2, double v2)
{
    if(x2>x1 && v2>v1){
        cout<<"NO"<<endl;
    }else
    {
        double t=(x2-x1)/(v1-v2);
        int t1=int(t);
        if(t-t1==0)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }

    }

}
int main()
{
    double x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    NumberLineJumps(x1,v1,x2,v2);
    return 0;
}
