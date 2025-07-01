#include<bits/stdc++.h>
using namespace std;

void print(string s){
	set<string> se;
	stringstream ss(s);
	string tmp="";
	while(ss>>tmp){
		se.insert(tmp);
	}
	for(int i=0;i<se.size();i++){
		cout<<se[i]<<" ";
	}
}


int main(){
	string s="lap   trinh   python  java python c lap trinh ";
	print(s);
}