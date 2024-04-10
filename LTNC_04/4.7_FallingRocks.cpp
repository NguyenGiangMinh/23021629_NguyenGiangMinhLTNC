#include <iostream>
#include <string>

using namespace std;

bool arr[1000][1000] = {false};

void check(char a[][1000], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'Y') {
                arr[i][j]=true;
                if (i + 1 < n && a[i + 1][j] == 'E') {
                    a[i + 1][j] = 'Y';
                    //arr[i + 1][j] = true;
                }
                if (i + 1 < n) {
                    if (j - 1 >= 0 && a[i][j - 1] == 'E' && a[i + 1][j - 1] == 'E') {
                        a[i + 1][j - 1] = 'Y';
                        //arr[i + 1][j - 1] = true;
                    }
                    if (j + 1 < m && a[i][j + 1] == 'E' && a[i + 1][j + 1] == 'E') {
                        a[i + 1][j + 1] = 'Y';
                        //arr[i + 1][j + 1] = true;
                    }
                }
            }
        }
    }
}

int main() {
    int W, H;
    cin >> W >> H;
    char a[1000][1000];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> a[i][j];
        }
    }
    check(a, H, W);
    bool flag = false;
    for (int i = 0; i < W; i++) {
        if (arr[H - 1][i]) {
            flag = true;
            break;
        }
    }
    if(flag)
    {
       cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;
}
