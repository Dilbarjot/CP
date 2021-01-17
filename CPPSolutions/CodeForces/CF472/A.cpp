/**
 ** Created by dilbar on 2021-01-06
 **/

#include <bits/stdc++.h>

using namespace std;

bool notprime(int x) {
    if (x % 2 == 0) {
        return true;
    }
    for (int i = 3; i < x; i += 2) {
        if (x % i == 0)
            return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 4; i < (n / 2)+1; i++) {
        if (notprime(i) && notprime(n - i)) {
            cout << i << " " << n - i << "\n";
            break;
        }
    }
    return 0;
}
