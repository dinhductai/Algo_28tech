#include<bits/stdc++.h>
using namespace std;

void chuanhoaten(string s){
	stringstream ss(s);
	string tmp="";
	string rs="";
	while(ss>>tmp){
		for(int i=0;i<tmp.size();i++){
			if(i==0 && tmp[i]>=97 && tmp[i]<=122){
				rs+=tmp[i]-32;
			}
			else if(tmp[i]>=65 && tmp[i]<=90){
				rs+=tmp[i]+32;
			}else rs+=tmp[i];
		}
		rs+=" ";
	}
	cout<<rs;
}

void convert(string s){
	stringstream ss(s);
	string tmp="";
	string rs="";
	while(ss>>tmp){
		tmp[0] = toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		rs+=tmp+" ";
	}
	cout<<rs;
	
}


int main(){
	string s="nguYEn vAn   maNH";
	convert(s);
}