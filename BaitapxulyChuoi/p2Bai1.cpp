#include<bits/stdc++.h>
using namespace std;

int main(){

	string s="Python Java C++      PHP Js";
	stringstream ss(s);
	string tmp="";
	while(ss>>tmp){
		cout<<tmp<<endl;
	}
	
	
}