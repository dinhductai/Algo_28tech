#include<bits/stdc++.h>
using namespace std;

void toUpperStr(string str){
	for(int i=0;i<str.size();i++){
		if(str[i]>=97 && str[i]<=122){
			cout<<(char) (str[i]-32);
		}
		else cout<<str[i];
	}
}

void convert(string s){
	stringstream ss(s);
	string tmp="";
	vector<string> v;
	while(ss>>tmp){
		tmp[0] = toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
	 	if(i==0){
	 		toUpperStr(v[v.size()-1]);
	 		cout<<", ";
		}
		cout<<v[i]<<" ";
	}
	
}

int main(){
	string s="nguYEn vAn   maNH";
	convert(s);
}