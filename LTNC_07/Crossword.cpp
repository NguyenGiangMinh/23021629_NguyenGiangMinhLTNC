#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

const int Maxn = 10;

map <char, int> M[Maxn][Maxn];
string B[Maxn];
string my[Maxn];
int len;
bool tk[Maxn];
bool found;

bool checkHor(int r, int c, const string &s)
{
    if (c + s.length() > Maxn) return false;
    for (int i = 0; i < s.length(); i++)
        if (B[r][c + i] == '+' || !M[r][c + i].empty() && M[r][c + i].begin()->first != s[i]) return false;
    return true;
}

bool checkVer(int r, int c, const string &s)
{
    if (r + s.length() > Maxn) return false;
    for (int i = 0; i < s.length(); i++)
        if (B[r + i][c] == '+' || !M[r + i][c].empty() && M[r + i][c].begin()->first != s[i]) return false;
    return true;
}

void addHor(int r, int c, const string &s, int val)
{
    for (int i = 0; i < s.length(); i++) {
        M[r][c + i][s[i]] += val;
        if (M[r][c + i][s[i]] == 0) M[r][c + i].erase(s[i]);
    }
}

void addVer(int r, int c, const string &s, int val)
{
    for (int i = 0; i < s.length(); i++) {
        M[r + i][c][s[i]] += val;
        if (M[r + i][c][s[i]] == 0) M[r + i][c].erase(s[i]);
    }
}

void Gen(int r, int c)
{
    if (r >= Maxn) {
        found = true;
        for (int i = 0; i < Maxn; i++) {
            for (int j = 0; j < Maxn; j++)
                printf("%c", B[i][j] == '+'? B[i][j]: M[i][j].begin()->first);
            printf("\n");
        }
    } else if (c >= Maxn) Gen(r + 1, 0);
        else if (B[r][c] == '+') Gen(r, c + 1);
        else {
            for (int i = 0; i < len && !found; i++) if (!tk[i]) {
                tk[i] = true;
                if (checkHor(r, c, my[i])) {
                    addHor(r, c, my[i], 1);
                    Gen(r, c + 1);
                    addHor(r, c, my[i], -1);
                }
                if (checkVer(r, c, my[i])) {
                    addVer(r, c, my[i], 1);
                    Gen(r, c + 1);
                    addVer(r, c, my[i], -1);
                }
                tk[i] = false;
            }
            if (!M[r][c].empty()) Gen(r, c + 1);
        }
}

int main() {
    for (int i = 0; i < Maxn; i++)
        cin >> B[i];
    string s; cin >> s;
    int pnt = 0;
    while (pnt < s.length()) {
        int nxt = pnt;
        while (nxt < s.length() && s[nxt] != ';') nxt++;
        my[len++] = s.substr(pnt, nxt - pnt); pnt = nxt + 1;
    }
    Gen(0, 0);
    return 0;
}
