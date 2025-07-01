#include<bits/stdc++.h>
using namespace std;

void count(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	
	stringstream ss(s);
	string tmp;
	vector<string> v;
	map<string,int> m;
	while(ss>>tmp){
		if(m[tmp]==0){
			v.push_back(tmp);
		}
		m[tmp]++;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" "<<m[v[i]]<<endl;
	}
}

int main(){
	string s="PYTHON   Java php php java pyTHON C C++ c++";
	count(s);
}