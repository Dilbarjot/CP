/**
 ** Created by dilbar on 2021-01-09
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt, n, s, j, pos, sol;
    cin >> tt;
    while (tt) {
        j = 1, s = 0, sol = 0;
        cin >> n;
        while (s != n) {
            pos = s + j;
            if (pos <= n) {
                s = pos;
            } else {
                s = s - 1;
            }
            sol++;
            j++;
        }
        cout << sol << "\n";
        tt--;
    }
    return 0;
}
