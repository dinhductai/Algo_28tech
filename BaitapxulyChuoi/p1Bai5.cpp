#include<iostream>
using namespace std;

int mark[255]={0};
bool printed[255]={0};
void count(string s){
	for(int i=0;i<s.size();i++){
		mark[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
		if(!printed[s[i]]){
			cout<<mark[s[i]]<<" "<<(char) s[i]<<endl;
			printed[s[i]]=true;
		}
	}
}

int main(){
	count("ppbaaaabcadghh");
}