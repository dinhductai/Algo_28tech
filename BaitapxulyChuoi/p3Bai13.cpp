#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy5(string bin) {
    int remainder = 0;
    for (char c : bin) {
        remainder = (remainder * 2 + (c - '0')) % 5;
    }
    return remainder == 0;
}

int main() {
    int T; cin >> T;
    while (T--) {
        string bin;
        cin >> bin;
        if (isDivisibleBy5(bin))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
