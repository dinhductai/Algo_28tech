#include<iostream>
using namespace std;

string rev(string s){
	string rs="";
	for(int i=s.size()-1;i>=0;i--){
		rs+=s[i];
	}
	return rs;
}

bool doixung(string s){
	string rvstr = rev(s);
	return rvstr == s;
}

bool doixung2(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			return false;
		}else{
			l++;r--;
		}
	}
	return true;
}

int main(){
	cout<<doixung2("AbcddcbA");
}