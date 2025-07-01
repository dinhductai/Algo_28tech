#include<bits/stdc++.h>
using namespace std;

void count(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	
	stringstream ss(s);
	string tmp="";
	map<string,int> m;
	vector<string> v;
	while(ss>>tmp){
		if(m[tmp] == 0){
			v.push_back(tmp);
		}
		m[tmp]++;
	}
	for(int i=0;v.size();i++){
		cout<<v[i] <<" "<<m[v[i]]<<endl;
	}
	
}

int main(){
	string s="PYTHON   Java php php java pyTHON C C++ c++";
	count(s);
}