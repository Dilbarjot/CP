/**
 ** Created by dilbar on 2021-01-17
 ** Problem: https://www.hackerrank.com/challenges/the-time-in-words/problem
 **/

#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    string ones[] = {"one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine", "ten", "eleven",
                     "twelve"};
    string twos[] = {"eleven", "twelve",
                     "thirteen", "fourteen",
                     "fifteen", "sixteen",
                     "seventeen", "eighteen", "nineteen"};

    string tens[] = {"ten", "twenty", "thirty", "forty", "fifty",
                     "sixty"
    };
    string ans;
    if (m == 0) {
        ans += ones[h - 1] + " o' clock";
    } else if (m > 0 && m <= 30) {
        if (m == 15) {
            ans += "quarter past " + ones[h - 1];
        } else if (m == 30) {
            ans += "half past " + ones[h - 1];
        } else {
            if (m <= 9) {
                ans += ones[m - 1];
                if (m == 1)
                    ans += " minute past " + ones[h - 1];
                else
                    ans += " minutes past " + ones[h - 1];
            } else if (m % 10 == 0) {
                ans += tens[m / 10 - 1];
                ans += " minutes past " + ones[h - 1];
            } else if (m >= 11 && m <= 19) {
                m -= 11;
                ans += twos[m];
                ans += " minutes past " + ones[h - 1];
            } else {
                int d = m / 10;
                ans += tens[d - 1] + " ";
                d = m % 10;
                ans += ones[d - 1];
                ans += " minutes past " + ones[h - 1];
            }
        }
    } else {
        if (m == 45) {
            ans += "quarter to " + ones[h % 12];
        } else {
            m = 60 - m;
            if (m <= 9) {
                ans += ones[m - 1];
                if (m == 1)
                    ans += " minute to " + ones[h % 12];
                else ans += " minutes to " + ones[h % 12];

            } else if (m % 10 == 0) {
                ans += tens[m / 10 - 1];
                ans += " minutes to " + ones[h % 12];
            } else if (m >= 11 && m <= 19) {
                m -= 11;
                ans += twos[m];
                ans += " minutes to " + ones[h % 12];
            } else {
                int d = m / 10;
                ans += tens[d - 1] + " ";
                d = m % 10;
                ans += ones[d - 1];
                ans += " minutes to " + ones[h % 12];
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i <= 12; i++) {
        for (int j = 0; j < 60; j++) {
            cout << i << " : " << j << " = " << timeInWords(i, j) << "\n";
        }
    }
    return 0;
}

