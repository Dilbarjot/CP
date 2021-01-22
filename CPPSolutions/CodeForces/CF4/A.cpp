/**
 ** Created by dilbar on 2021-01-04
 ** https://codeforces.com/problemset/problem/4/A
 **/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n>2){
        if(n%2==0){
            cout << "YES\n";
        }else cout << "NO\n";
    }else cout << "NO\n";
    return 0;
}
