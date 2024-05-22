#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a; cin>>a;
    double b; cin>>b;
    cin.ignore();
    string c;
    getline(cin,c);
    string ss=s+c;
    cout<<a+i<<endl;
    cout<<setprecision(1)<<fixed<<b+d<<endl;
    cout<<ss<<endl;

    return 0;
}
