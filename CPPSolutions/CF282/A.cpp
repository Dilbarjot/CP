/**
 ** Created by dilbar on 2021-01-06
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 0, n;
    cin >> n;
    string line;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n) {
        getline(cin, line);
        int len = line.length();
        for (int i = 0; i < len; i++) {
            char ch = line.at(i);
            if (ch == '+') {
                x++;
                break;
            } else if (ch == '-') {
                x--;
                break;
            }
        }
        n--;
    }
    cout << x << "\n";
    return 0;
}
