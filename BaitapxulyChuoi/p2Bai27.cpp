#include<bits/stdc++.h>
using namespace std;

void check(string s){
	bool used[26]={false};
	for(char c: s){
		used[c-97]=true;
	}
	int cnt;
	for(bool item:used){
		if(item==false){
			cnt++;
		}
	}
	cout<<cnt;
}


int main(){
	string s="zyx";
	check(s);
}