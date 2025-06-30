#include<iostream>
using namespace std;

void count(string s){
	int alphabet=0,digit=0,charac=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>=48 && s[i]<=57){
			digit++;
		}
		else if(s[i] >= 65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
			alphabet++;
		}else charac++;
	}
	cout<<alphabet<< " "<<digit<<" "<<charac;
}

int main(){
	count("Python 123@@");
}