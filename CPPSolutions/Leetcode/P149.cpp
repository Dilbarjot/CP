/**
 ** Created by dilbar on 2021-01-17
 **/

#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> vii;

class Solution {
public:
    int maxPoints(vector<vector<int>> &points) {
        vector<vector<int>> v1;
        int r = points.size();
        map<int, int> m;
        int max = 1;
        for (int i = 0; i < r; i++) {
            vector<int> a = points.at(i);
            for (int j = i + 1; j < r; j++) {
                vector<int> b = points.at(j);
                int diffX = abs(a[0] - b[0]);
                int diffY = abs(a[1] - b[1]);
                int diff = abs(diffX / diffY);
                auto it = m.find(diff);
                if (it == m.end()) {
                    m.insert({diff, 2});
                } else {
                    int sum = m.at(diff) + 1;
                    if (sum > max)
                        max = sum;
                    m.insert(it, {diff, sum});
                }
            }
        }
        return max;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    vii v2 = {{1, 1},
              {3, 2},
              {5, 3},
              {4, 1},
              {2, 3},
              {1, 4}};
    cout << s.maxPoints(v2) << "\n";
    return 0;
}
