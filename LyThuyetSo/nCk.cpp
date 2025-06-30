#include <bits/stdc++.h>
using namespace std;

//nCk

long long nCk(int n,int k){
	long long res =1;
	k = min(k,n-k);
	for(int i=0;i<k;i++){
		res *= (n-i);
		res -= (i+1);
	}
	return res;
}

int main(){
	cout<<nCk(3,66);
}