//
// Created by dilbar on 2021-01-30.
//

#include <cstdint>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s = bitset<32>(n).to_string();
        uint32_t s2 = 0;
        int l = s.length();
        vector<uint32_t> s3;
        for (int i = 0; i < l; i++) {
            char c = s.at(i);
            int x = c - 48;
            double val = pow(2, i);
            s2 += (x * val);
        }
        return s2;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    uint32_t n = 43261596;

    cout << s.reverseBits(n) << "\n";
    return 0;
}
