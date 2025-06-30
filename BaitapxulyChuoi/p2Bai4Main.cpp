#include<bits/stdc++.h>
using namespace std;


//comparator 
//true: khi muon a đứng trước b khi sắp xếp
//false : khi  muốn a đứng sau b sau khi sắp xếp
//ban đầu a đứng trước b
bool comparator(string a,string b){
	if(a.size()!=b.size()) return a.size()<b.size(); //trường hợp khác size 
	else return a<b; //trường hợp cùng size thì phải theo từ điển
}

int main(){
	
	string s="aa abc aaa a bc z";
	stringstream ss(s);
	string tmp="";
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),comparator); //quick sort
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}