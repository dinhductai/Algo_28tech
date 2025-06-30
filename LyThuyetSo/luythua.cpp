#include <bits/stdc++.h>
using namespace std;

// Lũy thừa nhị phân
long long binpow(long long a, long long b) {
    if (b == 0) return 1;
    long long x = binpow(a, b / 2);
    if (b % 2 == 1)
        return x * x * a;
    else
        return x * x;
}

//lũy thừa nhị phân 2
long long binpow2(long long a,long long b){
	long long res =1;
	while(b !=0){
		if(b%2==1){
			res *= a;
			
		}
		b /= 2;
		a *= a;
	}
	return res;
}

int main() {
    cout << binpow(2, 30);
}
