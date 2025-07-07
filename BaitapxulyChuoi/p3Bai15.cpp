#include <bits/stdc++.h>
using namespace std;

// Hàm tính n % m, với n là chuỗi số lớn
long long modBigNumber(string n, long long m) {
    long long result = 0;
    for (char c : n) {
        result = (result * 10 + (c - '0')) % m;
    }
    return result;
}

// Hàm gcd thông thường
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string n;
        long long m;
        cin >> n >> m;

        if (m == 0) {
            // GCD(n, 0) = n
            cout << n << endl;
        } else {
            long long rem = modBigNumber(n, m);
            cout << gcd(m, rem) << endl;
        }
    }
    return 0;
}
