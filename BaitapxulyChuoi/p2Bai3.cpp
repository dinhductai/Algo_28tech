#include<bits/stdc++.h>
using namespace std;

bool is_upper(string s){
	for(int i=0;i<s.size();i++){
		if(!isupper(s[i])){
			return false;
		}
	}
	return true;
}

int main(){
	string s="Python Java C++      PHP Js";
	stringstream ss(s);
	vector<string> a;
	string tmp="";
//	while(ss>>tmp){
//		for(int i=0;i<tmp.size();i++){
//			if(tmp[i]>=65 && tmp[i]<=90){
//				a.push_back((char)tmp[i]);
//			}else{
//				a.clear();
//				break;
//			}
//			for(int j=0;j<=a.size();j++){
//				cout<<a[i];
//			}
//			cout<<" ";
//		}
//		
//	}

	while(ss>>tmp){
		if(is_upper(tmp)){
			cout<<tmp << " ";
		}
	}
}