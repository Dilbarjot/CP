/**
 ** Created by legionary on 2021-01-05
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, sol = 0, i = 0;
    cin >> n >> k;
    int scores[n];
    while (i < n) {
        cin >> scores[i];
        i++;
    }
    i = 0;
    int val = scores[k - 1];
    while (i < n) {
        int score = scores[i];
        if (score > 0) {
            if (score >= val) { sol++; }
            else { break; }
        }
        i++;
    }
    cout << sol << "\n";
    return 0;
}
