/**
 ** Created by dilbar on 2021-01-03
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string line;
    getline(cin, line);
    int length = line.length(), ans = 0, br = 0;
    for (int i = 0; i < length; i++) {
        char ch = line.at(i);
        if (ch == '(')
            br++;
        else {
            br--;
            if (br >= 0) {
                ans++;
            } else br = 0;
        }
    }
    cout << ans * 2 << "\n";
    return 0;
}
