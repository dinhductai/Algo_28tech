#include<bits/stdc++.h>
using namespace std;

void sum(string s){
	int total;
	string num ="";
	
	for(char c: s){
		if(isdigit(c)){
			num+=c;
		}else{
			if(!num.empty()){
				total+=stoi(num);
				num="";
			}
		}
	}
		if(!num.empty()){
				total+=stoi(num);
				num="";
			}
	cout<<total;
}

int main(){
	string s="1abc2x30yz67";
	sum(s);
}