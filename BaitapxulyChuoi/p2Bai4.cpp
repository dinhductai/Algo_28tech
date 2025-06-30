#include<bits/stdc++.h>
using namespace std;

//string sapxep(string s){
//	stringstream ss(s);
//	string tmp="";
//	
//	while(ss>>tmp){
//		
//	}
//}

int main(){
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}