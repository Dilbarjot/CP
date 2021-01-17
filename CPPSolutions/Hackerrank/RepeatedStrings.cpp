/**
 ** Created by dilbar on 2021-01-17
 ** Problem accessed at: https://www.hackerrank.com/challenges/repeated-string/problem
 **/

#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long l = s.length(),  sol = 0;
    long div = n/l;
    long rem = n%l;
    for(int i = 0; i  < l; i++){
        if(s.at(i)=='a')
            sol++;
    }
    sol = sol * div;
    for(int i = 0; i < rem; i++){
        if(s.at(i)=='a')
            sol++;

    }
    return sol;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << repeatedString("a", 1000000000000) << "\n";
    return 0;
}

