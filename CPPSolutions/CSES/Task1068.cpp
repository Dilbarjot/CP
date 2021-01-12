/**
 ** Created by dilbar on 2021-01-12
 **/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else n = n * 3 + 1;
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}
