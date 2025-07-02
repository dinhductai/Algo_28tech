#include<bits/stdc++.h>
using namespace std;

string to_lower(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	return s;
}

void duplicate(string a){
	stringstream ss(a);
	string tmp;
	set<string> check;
//	vector<string> v;
	while(ss>>tmp){
		string word = to_lower(tmp);// có thể ko cần thiết
		if(check.find(word) == check.end()){
//			v.push_back(tmp);
			check.insert(word);
		}else{
			cout<<tmp;
			return;
		}
	}
	cout<<-1;

	
}

int main(){
	string a="ngon  C  ngu lap trinh C python lap trinh ngon ";
	duplicate(a);
	
}