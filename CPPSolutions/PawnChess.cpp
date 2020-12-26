//
// Created by dilbar on 2020-12-25.
// Problem accessible at: https://codeforces.com/contest/592/problem/A
//

#include <iostream>

using namespace std;

int main() {
    char chess[8][8];
    for (auto &ches : chess) {
        for (char &che : ches) {
            cin >> che;
        }
    }
    int W_loc = 8;
    int B_loc = 8;
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            char value = chess[i][j];
            if (value == 'B') {
                break;
            } else if (value == 'W') {
                if ((i + 1) < W_loc)
                    W_loc = i + 1;
                break;
            }
        }
        for (int i = 7; i >= 0; i--) {
            char value = chess[i][j];
            if (value == 'W') {
                break;
            } else if (value == 'B') {
                if ((7 - i + 1) < B_loc)
                    B_loc = 7 - i + 1;
                break;
            }
        }
    }
    if (B_loc < W_loc)
        cout << "B";
    else cout << "A";
    return 0;
}