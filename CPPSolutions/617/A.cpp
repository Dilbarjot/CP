/**
 ** Created by dilbar on 2021-01-06
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, steps = 0;
    cin >> x;
    while (x) {
        if (x >= 5) {
            x -= 5;
            steps++;
        } else if (x >= 4) {
            x -= 4;
            steps++;
        } else if (x >= 3) {
            x -= 3;
            steps++;
        } else if (x >= 2) {
            x -= 2;
            steps++;
        } else if (x >= 1) {
            x -= 1;
            steps++;
        }
    }
    cout << steps << "\n";
    return 0;
}
