#include<bits/stdc++.h>
using namespace std;


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
	 		cout<<v[v.size()-1]<<", ";
		}
		cout<<v[i]<<" ";
	}
	
}

int main(){
	string s="nguYEn vAn   maNH";
	convert(s);
}