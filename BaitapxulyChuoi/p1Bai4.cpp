#include<iostream>
using namespace std;

int mark[255]={0};

void count(string s){
	for(int i=0;i<s.size();i++){
		mark[s[i]]++;
	}
	for(int i=0;i<256;i++){
		if(mark[i]>0){
			cout<<(char)i<<" "<<mark[i]<<endl;
		}
	}
}

int main(){
	count("aaababca");
}