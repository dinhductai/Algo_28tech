#include<bits/stdc++.h>
using namespace std;

void check(string s){
	map<char,int> freq;
	for(char c: s){
		freq[c]++;
	}
	
	int cnt=0;
	for(auto item: freq){
		if(item.second%2 != 0){
			cnt++;
		}
	}
	if((s.size()%2 ==0 && cnt==0) || (s.size()%2!=0 && cnt==1)){
		cout<<"Yes";
	}else cout<<"No";
}

int main(){
	string s="ttyz$$$$***********ywai4o43p4";
	check(s);
}