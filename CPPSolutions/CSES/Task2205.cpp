/**
 ** Created by dilbar on 2021-01-12
 ** In progress
 **/

#include <bits/stdc++.h>

using namespace std;

int dist(string x, string y) {
    int diff = 0, l = x.length();
    for (int i = 0; i < l; i++) {
        if (x.at(i) != y.at(i))
            diff++;
    }
    return diff;
}

void printstr(string str, int n) {
    cout << str.substr(16 - n, 16) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int v, j = 0;
    cin >> n;
    v = pow(2, n);

    vector<string> vec;
    for (int i = 0; i < v; i++) {
        vec.push_back(bitset<16>(i).to_string());
    }
    int a = 1;
    while (!vec.empty()) {
        string prev = vec.at(j);
        if (j + a < vec.size()) {
            string curr = vec.at(j + a);
            if (dist(prev, curr) == 1) {
                printstr(prev, n);
                vec.erase(vec.begin() + j);
                a = 1;
            } else {
                a++;
            }
        } else {
            printstr(vec.at(0), n);
            vec.erase(vec.begin());
        }
    }
    return 0;
}
