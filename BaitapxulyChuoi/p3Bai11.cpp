#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy8(string s) {
    int len = s.length();
    string lastThree;
    if (len >= 3)
        lastThree = s.substr(len - 3);
    else
        lastThree = s;
    
    int num = stoi(lastThree);  // chuyển ba chữ số cuối thành số nguyên
    return (num % 8 == 0);
}

int main() {
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << (isDivisibleBy8(s) ? "YES" : "NO") << endl;
    }
    return 0;
}
