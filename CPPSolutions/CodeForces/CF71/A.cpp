/**
 ** Created by dilbar on 2021-01-04
 ** https://codeforces.com/problemset/problem/71/A
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string line;
    int tt;
    cin >> tt;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (tt) {
        getline(cin, line);
        int ln = line.length();
        if (ln > 10) {
            cout << line.at(0) << ln-2 << line.at(ln - 1) << "\n";
        } else cout << line << "\n";
        tt--;
    }
    return 0;
}
