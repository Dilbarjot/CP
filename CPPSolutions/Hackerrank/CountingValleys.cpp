/**
 ** Created by dilbar on 2021-01-17
 ** In progress
 **/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int l = path.length();
    int l1 = 0, l2 = 0;
    string v1[l / 2], v2[l / 2];
    bool d = false;
    for (int i = 0; i < l; i++) {
        char c = path.at(i);
        if (c == 'D') {
            d = true;
            v1[l1++] = 'D';
        } else {
            if (d) {
                v2[l2++] = 'U';
                d = false;
            }
        }
    }
    return l2 - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    string y;
//    cin >> x >> y;
    x = 14;
    y = "DDDUDUUDDDDUUU";
    cout << countingValleys(x, y) << "\n";
    return 0;
}