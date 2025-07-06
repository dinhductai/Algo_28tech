#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int num=0;
	int leg=s.size();
	if(leg==1){
		num=(s[leg-1] - '0'); //độ dài là 1 thì lấy số vị trí thứ 0
	}else{
		num=(s[leg-2] -'0')*10 + (s[leg-1]-'0');
	}
	
	if(num%4 == 0){
		cout<<"Yes";
	}else cout<<"No";
}