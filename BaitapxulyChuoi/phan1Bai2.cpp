#include<iostream>
using namespace std;

string to_strlwr(string s){
	string rs="";
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90){
			rs+=s[i]+32;
		}else rs+=s[i];
	}
	return rs;
}

int main(){
	cout<<to_strlwr("Python JAVA @");
	return 0;
}