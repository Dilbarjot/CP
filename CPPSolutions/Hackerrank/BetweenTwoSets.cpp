/**
 ** Created by dilbar on 2021-01-17
 ** Problem: https://www.hackerrank.com/challenges/between-two-sets/problem
 **/

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int getTotalX(vector<int> a, vector<int> b) {
    int l = a.back();
    int u = b.front();
    int sol = 0;
    for (int i = l; i <= u; i++) {
        int j, k;
        for (j = 0; j < a.size(); j++) {
            int c = a.at(j);
            if (i % c != 0) {
                break;
            }
        }
        for (k = 0; k < b.size(); k++) {
            int c = b.at(k);
            if (c % i != 0) {
                break;
            }
        }
        if (j == a.size() && k == b.size()) {
            sol++;
        }
    }
    return sol;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vi v = {2, 4};
    vi v2 = {16, 32, 96};
    cout << getTotalX(v, v2) << "\n";
    return 0;
}
