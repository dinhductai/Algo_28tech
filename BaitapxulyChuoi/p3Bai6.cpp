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

        int sum = 0;
        bool valid = true;

        for (char c : s) {
            if (!isPrimeDigit(c)) {
                valid = false;
                break;
            }
            sum += (c - '0');
        }

        if (valid && sum % 10 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
