/**
 ** Created by dilbar on 2021-01-16
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt, nn;
    cin >> tt;
    while (tt) {
        cin >> nn;
        if (nn < 3) {
            for (int i = 9; i > 9 - nn; i--) {
                cout << i;
            }
        } else {
            cout << "989";
            for (int i = 0; i < nn - 3; i++) {
                cout << i % 10;
            }
        }
        cout << "\n";
        tt--;
    }
    return 0;
}
