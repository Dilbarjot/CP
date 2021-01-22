/**
 ** Created by dilbar on 2021-01-04
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    int solved = 0;
    while (tt) {
        int p, v, t, sum = 0;
        cin >> p >> v >> t;
        sum = p + v + t;
        if (sum >= 2) {
            solved++;
        }
        tt--;
    }
    cout << solved << "\n";
    return 0;
}
