/**
 ** Created by dilbar on 2021-01-31
 **/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool dd = false, dv = false;
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long divid = abs(dividend), divis =  abs(divisor);
        long val = 0;
        if(divis == 1){
            val =divid;
        }else {
            while (divid >= divis) {
                val++;
                divid -= divis;
            }
        }
        val = sign * val;
        if (val > 2147483647) {
            return 2147483647;
        } else if (val < -2147483647 - 1) {
            return -2147483647 - 1;
        }
        return val;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    cout << s.divide(10, 3) << "\n";
    return 0;
}
