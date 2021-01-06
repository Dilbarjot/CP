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

    while (tt) {
        int w, h, n;
        cin >> w >> h >> n;
        int w_e = 1, h_e = 1, ans = 1;
        if (w % 2 == 0) {
            while (w % 2 == 0) {
                w /= 2;
                w_e = w_e * 2;
            }
            ans = w_e;
        }
        if (h % 2 == 0) {
            while (h % 2 == 0) {
                h /= 2;
                h_e = h_e * 2;
            }
            ans = ans * h_e;
        }
        if (ans >= n) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
        tt--;
    }
    return 0;
}
