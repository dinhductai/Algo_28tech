#include <bits/stdc++.h>
using namespace std;

bool isPrimeDigit(char c) {
    return c == '2' || c == '3' || c == '5' || c == '7';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        string sumStr="";
        bool valid = true;

        for (char c : s) {
            if (!isPrimeDigit(c)) {
                valid = false;
                break;
            }
            sumStr += c;
        }
        string sumRV= sumStr;
        reverse(sumRV.begin(),sumRV.end());

        if (sumRV==sumStr && valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
