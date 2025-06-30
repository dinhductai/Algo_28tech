//đồng dư

#include<bits/stdc++.h>
using namespace std;

using ll =long long;
const int MOD =  1000000007;

//ct : (A+B) % C = ((A%C) +(B%C)) % C
//ct : (A-B) % C = ((A%C) -(B%C)+C) % C
//ct : (A*B) % C = ((A%C) *(B%C)) % C
//ct : (A^B) % C = (A%C) ^ B%C
//ct : (A/B) % C = (A%C * B^-1) % C

ll powMod(ll a,ll b,ll c){
	ll res = 1;
	a %=c;
	for(int i=1;i<=b;i++){
		res *=a;
		res %=c;
		
	}
	return res % c;
}

ll fibo(int n){
	ll f[n+1];
	f[0]=0;f[1]=1;
	for(int i=2;i<=n;i++){
		f[n] = f[n-1]+f[n-2];
		f[n] %= MOD;
	}
	
	return f[n]%MOD;
}

int main(){
//	int a[100],n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	int res = 0;
//	//công thức nhân
//	for(int i=0;i<n;i++){
//		res=res * (a[i]%3);
//		res %=3;
//	}
//	cout<<res;
//	cout<<powMod(1032,1000000, 10);]
	cout<<fibo(993);
	return 0;
}