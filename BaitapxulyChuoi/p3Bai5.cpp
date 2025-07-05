#include <bits/stdc++.h>
using namespace std;

bool isOdd(char c) {
    return (c - '0') % 2 != 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        // Kiểm tra thuận nghịch
        string rev = s;
        reverse(rev.begin(), rev.end());
        bool isPalindrome = (s == rev);

        // Kiểm tra toàn chữ số lẻ
        bool allOdd = true;
        for (char c : s) {
            if (!isOdd(c)) {
                allOdd = false;
                break;
            }
        }

        if (isPalindrome && allOdd) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
