/**
 ** Created by dilbar on 2021-01-05
 **/

#include <bits/stdc++.h>

using namespace std;

bool prime(int x) {
    if (x == 2)return true;
    bool flag = true;
    for (int i = 2; i < x / 2 + 1; i++) {
        if (x % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

bool divisors(int x) {
    int count = 0;
    for (int i = 2; i < (x / 2) + 1; i++) {
        if (x % i == 0) {
            if (prime(i)) {
                count++;
            }
        }
    }
    if (count == 2)return true; else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sol = 0;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        if (divisors(i)) {
            sol++;
        }
    }
    cout << sol << "\n";
    return 0;
}
