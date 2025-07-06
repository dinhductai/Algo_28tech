#include <bits/stdc++.h>
using namespace std;

bool checkDivisibleBy2(string s) {
    char last = s.back();
    return (last - '0') % 2 == 0;
}

bool checkDivisibleBy3(string s) {
    int sum = 0;
    for (char c : s) sum += c - '0';
    return sum % 3 == 0;
}

bool checkDivisibleBy5(string s) {
    char last = s.back();
    return (last == '0' || last == '5');
}

int main() {
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (checkDivisibleBy2(s) && checkDivisibleBy3(s) && checkDivisibleBy5(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
