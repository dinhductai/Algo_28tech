#include<iostream>
using namespace std;

bool mark[255]={false};

string to_lower(string s){
	string rs="";
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			rs+=s[i]+32;
		}
		else{ 
			rs+=s[i];
		}
	}
	return rs;
}

void check(string a){
	string s = to_lower(a);
	for(int i=0;i<s.size();i++){
		if(s[i]>=97 && s[i]<=122){
			mark[s[i]]=true;
		}
	}
	for(int i=97;i<=122;i++){
		if(mark[i]==false){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}

//THEquickbrownfoxjumpsoverthelazydog
//abcdefghijklmnopzzutvlt

int main(){
	check("THEquickbrownfoxjumpsoverthelaZydog");
}