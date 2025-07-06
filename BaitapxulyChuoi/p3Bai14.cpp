#include <bits/stdc++.h>
using namespace std;

long long modLargeNumber(string num, long long m) {
    long long res = 0;
    for (char c : num) {
        res = (res * 10 + (c - '0')) % m; //tiếp tục dùng tính phần dư
    }
    return res;
}

int main() {
    int T; cin >> T;
    while (T--) {
        string N;
        long long M;
        cin >> N >> M;
        cout << modLargeNumber(N, M) << endl;
    }
    return 0;
}
