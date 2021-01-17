/**
 ** Created by dilbar on 2021-01-15
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d, p_p, c_p = 1, l, jp = 0;
    bool j = false;
    string s;
    cin >> n >> d >> s;
    l = s.length();
    int i;
    while (c_p != n) {
        for (i = c_p + d - 1; i >= c_p; --i) {
            j = false;
            if (i >= l) {
                i = l - 1;
            }
            char c = s.at(i);
            if (c == '1') {
                c_p = i + 1;
                ++jp;
                j = true;
                break;
            }
        }
        if (i <= c_p && !j) {
            jp = -1;
            break;
        }

    }
    cout << jp << "\n";
    return 0;
}

