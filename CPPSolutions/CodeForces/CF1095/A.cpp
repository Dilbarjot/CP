/**
 ** Created by dilbar on 2021-01-09
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, j = 0;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin, s);
    for (int id = 0; id < l; id += j) {
        cout << s.at(id);
        j++;
    }
    return 0;
}
