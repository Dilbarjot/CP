/**
 ** Created by dilbar on 2021-01-06
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i = 0, sum = 0, x;
    cin >> n;
    while (n) {
        cin >> x;
        sum += x;
        i++;
        n--;
    }
    cout << ((double)sum)/i << "\n";
    return 0;
}
