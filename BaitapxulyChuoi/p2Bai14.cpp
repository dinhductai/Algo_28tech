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
	map<string,int> m;
	int cnt=0;
	vector<string> v;
	while(ss>>tmp){
		if(m[tmp]==0){
			v.push_back(tmp);
		}
		m[tmp]++;
		cnt=max(cnt,m[tmp]);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(cnt == m[v[i]]){
			cout<<cnt<< " "<<v[i];
			return;
		}
	}
	
	
	
}

int main(){
	string s="PYTHON   Java    php php java pyTHON C ";
	count(s);
}