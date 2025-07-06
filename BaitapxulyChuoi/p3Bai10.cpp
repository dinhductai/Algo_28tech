#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy25(string s) {
    int len = s.length();
    if (len == 1) return false;  // Số 1 chữ số không chia hết cho 25

    string lastTwo = s.substr(len - 2);  // lấy 2 ký tự cuối
    return (lastTwo == "00" || lastTwo == "25" || lastTwo == "50" || lastTwo == "75");
}

int main() {
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << (isDivisibleBy25(s) ? "Yes" : "No") << endl;
    }
    return 0;
}
