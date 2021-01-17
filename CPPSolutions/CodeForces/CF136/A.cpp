/**
 ** Created by dilbar on 2021-01-09
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i = 0, x;
    cin >> n;
    int f[n] = {0};
    while (i < n) {
        cin >> x;
        f[x - 1] = i + 1;
        i++;
    }
    i = 0;
    for (int i:f)
        cout << i << " ";
    return 0;
}
