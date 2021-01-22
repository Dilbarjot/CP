/**
 ** Created by dilbar on 2021-01-07
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool p = true;
    int n;
    cin >> n;
    bool l[255] = {false};
    while (n) {
        l[getchar()] = true;
        n--;
    }
    for (int i = 65; i < 91; i++) {
        char c = l[i];
        char c2 = l[i + 32];
        if (!c && !c2) {
            p = false;
            break;
        }
    }
    cout << (p ? "YES" : "NO") << "\n";
    return 0;
}
