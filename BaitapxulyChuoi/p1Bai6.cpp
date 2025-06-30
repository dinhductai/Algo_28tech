#include<iostream>
using namespace std;

int count[255]={0};

void findMax(string s){
	for(int i=0;i<s.size();i++){
		count[s[i]]++;
	}
	int maxPoint=0;
	int max=0;
	for(int i=0;i<256;i++){
		if(count[i]>=max){
			maxPoint=i;
			max=count[i];
		}
	}
	cout<<(char) maxPoint;
}

int main(){
	findMax("baaaabca bbb");
}