/**
 ** Created by dilbar on 2021-01-12
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s = 1, max = 1;
    char c, cu = getchar();
    while ((c = getchar()) && c != '\n') {
        if (cu == c) {
            s++;
        } else {
            s = 1;
            cu = c;
        }
        if (max < s) {
            max = s;
        }
    }
    cout << max << "\n";
    return 0;
}
