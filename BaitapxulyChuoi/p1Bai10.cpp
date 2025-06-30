#include<iostream>
using namespace std;

bool mark[255]={false};

void check(string s){
	for(int i=0;i<s.size();i++){
		if(97 <= s[i] <=122){
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

//thequickbrownfoxjumpsoverthelazydog
//abcdefghijklmnopzzutvlt

int main(){
	check("abcdefghijklmnopzzutvlt");
}