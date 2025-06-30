#include<bits/stdc++.h>
using namespace std;

int main(){

	string s="Python Java C++      PHP Js";
	stringstream ss(s);
	string tmp="";
	int cnt=0;
	while(ss>>tmp){
		cnt++;
	}
	cout<<cnt;
	
}