/**
 ** Created by dilbar on 2021-01-03
 ** https://codeforces.com/problemset/problem/1469/A
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string line;
    while (n) {
        getline(cin, line);
        int length = line.length();
        if (length % 2 == 0 && line.at(length-1) != '('  && line.at(0) != ')') {
            cout << "Yes\n";
        } else cout << "No\n";
        n--;
    }
    return 0;
}
