
#include<bits/stdc++.h>
using namespace std;

void remove(string s){
	stringstream ss(s);
	string tmp;
	set <string> appeared;
	vector<string> v;
	while(ss>>tmp){
		if(appeared.find(tmp) == appeared.end()){
			appeared.insert(tmp);
			v.push_back(tmp);
		}
	}
	for(string item: v){
		cout<<item<<" ";
	}
	
	
}

int main(){
	string s="lap   trinh   python          java python c lap trinh trinh ";
	remove(s);
}