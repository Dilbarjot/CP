/**
 ** Created by dilbar on 2021-01-09
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, ones = 0, len;
    cin >> x;
    string bin = bitset<32>(x).to_string();
    len = bin.length();
    for (int i = 0; i < len; i++) {
        if (bin.at(i) == '1')
            ones++;
    }
    cout << ones << "\n";
    return 0;
}
