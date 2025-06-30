#include<iostream>
using namespace std;

bool markA[255]={false};
bool markB[255]={false};
bool checked[255]={false};

void sameStr(string a,string b){
	for(int i=0;i<a.size();i++){
		markA[a[i]]=true;
	}
	for(int i=0;i<b.size();i++){
		markB[b[i]]=true;
	}
//	for(int i=0;i<256;i++){
//		if(markA[i]==true && markB[i]==true){
//			cout<<(char) i;
//		}
//	}
	for(int i=0;i<a.size();i++){
		if(markA[a[i]] && markB[a[i]] && checked[a[i]]==0){
			cout<<(char)a[i];
			checked[a[i]]=true;
		}
	}
}

int main(){
	string a="Python java PHP";
	string b="Project";
	sameStr(a,b);
}