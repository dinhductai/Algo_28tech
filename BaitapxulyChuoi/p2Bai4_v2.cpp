#include<bits/stdc++.h>
using namespace std;


int main(){
//	vector<int> v;
//	int n;cin>>n;
//	for(int i=0;i<n;i++){
//		int x;cin>>x;
//		v.push_back(x);
//	}
//	sort(v.begin(),v.end(),greater<int>());
//	for(int i=0;i<n;i++){
//		cout<<v[i]<<" ";
//	}

	string s;
	getline(cin,s);
	sort(s.begin(),s.end(),greater<char>());
	cout<<s;
	
}