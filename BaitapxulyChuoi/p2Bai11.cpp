#include<bits/stdc++.h>
using namespace std;


void convert(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string tmp="";
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
		cout<<v[v.size()-1];

	cout<<"@gmail.com";
	
}
int main(){
	string s="nguYEn Thi thU Linh";
	convert(s);
}