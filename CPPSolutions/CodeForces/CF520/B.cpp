/**
 ** Created by dilbar on 2021-01-07
 **/

#include <bits/stdc++.h>

#define long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, sol = 0;
    cin >> n >> m;
    while (n >= 0 && n != m) {
        if (m >= 2 * n)
            n = 2 * n;
        else n = n - 1;
        sol++;
    }
    cout << sol << "\n";
    return 0;
}
