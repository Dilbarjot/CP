/**
 ** Created by dilbar on 2021-01-16
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt, i = 0, t, r = 1;
    cin >> tt;
    int e, g, m, h, sum;
    cin >> e >> g >> m >> h;
    t = e + g + m + h;
    while (i < tt-1) {
        cin >> e >> g >> m >> h;
        sum = e + g + m + h;
        if (sum > t)
            r++;
        i++;
    }
    cout << r << "\n";
    return 0;
}

