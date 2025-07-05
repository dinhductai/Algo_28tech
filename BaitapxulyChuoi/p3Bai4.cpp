#include <bits/stdc++.h>
using namespace std;

bool isEven(char c) {
    return (c - '0') % 2 == 0;
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

        // Kiểm tra toàn chữ số chẵn
        bool allEven = true;
        for (char c : s) {
            if (!isEven(c)) {
                allEven = false;
                break;
            }
        }

        if (isPalindrome && allEven) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
