#include<bits/stdc++.h>
using namespace std;

void count(string s){
	int cnt=0;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			cnt++;
		}
	}
	cout<<cnt;
}

int main(){
	string s="RRRR";
	count(s);
}