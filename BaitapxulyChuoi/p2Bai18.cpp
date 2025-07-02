#include<bits/stdc++.h>
using namespace std;

void lietke(string a, string b){
	stringstream sa(a);
	stringstream sb(b);
	set<string> seta,setb;
	string tmp;
	while(sa >> tmp){
		seta.insert(tmp);
	}
	while(sb >> tmp){
		setb.insert(tmp);
	}
	for(string item: seta){
		if(setb.find(item) == setb.end()){
			cout<<item <<" ";
		}
	}
	
}

int main(){
	string a="aaa abc abcd a";
	string b ="a abc";
	lietke(a,b);
}