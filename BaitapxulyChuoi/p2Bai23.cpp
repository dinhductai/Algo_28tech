#include<bits/stdc++.h>
using namespace std;

void check(string s){
	map<char,int> m;
	for(int i=0;i<s.size();i++){
		m[(char)s[i]]++;
	}
	
	for(auto item: m){
		if(item.second==1){
		cout<<item.first;
		}
	}

}

int main(){
	string s="ABCDEAABC";
	check(s);
}