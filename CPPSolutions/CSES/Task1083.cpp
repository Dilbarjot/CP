/**
 ** Created by dilbar on 2021-01-12
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, tt, x;
    cin >> n;
    tt = n - 1;
    bool a[n + 1] = {false};
    while (tt) {
        cin >> x;
        a[x] = true;
        tt--;
    }
    for (int i = 1; i < n + 1; i++)
        if (!a[i]) {
            cout << i << "\n";
            break;
        }
    return 0;
}
