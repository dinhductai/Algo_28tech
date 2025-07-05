#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
        
        int sum = 0;
        for (char c : s) sum += (c - '0');

        char last = s.back();
        bool divisibleBy2 = (last - '0') % 2 == 0;
        bool divisibleBy3 = (sum % 3 == 0);

        if (divisibleBy2 && divisibleBy3) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
