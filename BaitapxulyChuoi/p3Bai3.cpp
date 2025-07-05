#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int sum = 0;
        for (char c : s) {
            sum += c - '0'; // chuyển ký tự sang số
        }
        cout << sum << endl;
    }
    return 0;
}
