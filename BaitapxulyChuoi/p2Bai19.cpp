#include<bits/stdc++.h>
using namespace std;

string to_lowerStr(string s){
	for(int i=0;i<s.size();i++){
	if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	return s;
}

void remove(string s,string r){
//	for(int i=0;i<s.size();i++){
//		if(s[i]>=65 && s[i]<=90){
//			s[i]=s[i]+32;
//		}
//	}
	
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		string test = to_lowerStr(tmp);
		if(test!=r){
			cout<<tmp<<" ";
		}
	}
	
}

int main(){
	string s="aaa AAA bcd bc Aaa ZZZ ";
	string r="aaa";
	remove(s,r);
}