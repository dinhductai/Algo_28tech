#include<bits/stdc++.h>
using namespace std;

void remove(string s,string r){
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		if(tmp!=r){
			cout<<tmp<<" ";
		}
	}
	
}

int main(){
	string s="lap trinh   python          java python c lap trinh trinh ";
	string r="trinh";
	remove(s,r);
}