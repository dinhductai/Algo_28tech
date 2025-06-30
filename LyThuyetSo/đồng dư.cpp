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

int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res = 0;
	//công thức nhân
	for(int i=0;i<n;i++){
		res=res * (a[i]%3)
		res %=3;
	}
	cout<<res;
	return 0;
}