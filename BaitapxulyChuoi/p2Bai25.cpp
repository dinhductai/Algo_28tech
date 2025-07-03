#include<bits/stdc++.h>
using namespace std;

void sum(string s){
	int largest=0;
	string num ="";
	
	for(char c: s){
		if(isdigit(c)){
			num+=c;
		}else{
			if(!num.empty()){
				largest = max(largest,stoi(num));
				num="";
			}
		}
	}
		if(!num.empty()){
				largest = max(largest,stoi(num));
				num="";
			}
	cout<<largest;
}

int main(){
	string s="100klh564abc365bg";
	sum(s);
}