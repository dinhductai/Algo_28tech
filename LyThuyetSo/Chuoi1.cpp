#include <bits/stdc++.h>
using namespace std;

//0-9 48-57
//A-Z 65-90
//a-z 97-122

int main(){
	string s;
	getline(cin,s);
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-48;
	}
	cout<<sum;
	
	
}