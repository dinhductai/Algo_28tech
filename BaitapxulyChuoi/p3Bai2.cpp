#include<bits/stdc++.h>
using namespace std;

string check(string a,string b){
	if(a.size()<b.size()){
		swap(a,b);
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	string rs="";
	int carry=0;
	for(int i=0;i<a.size();i++){
		int digitA =  a[i]-'0';
		int digitB = (i<b.size()) ? b[i]-'0' : 0;
		
		int sub = digitA-digitB-carry;
		
		if(sub<0){
			sub+=10;
			carry=1;
		}else carry=0;
	 rs+=(sub+'0');

	}
	while(rs.size()>1 && rs.back()=='0'){
		rs.pop_back();
	}
	reverse(rs.begin(),rs.end());
	return rs;
	
}

int main(){
	string a="192389123919239123912912931923912931923";
	string b="81239123912931290491284912498";
	cout<<check(a,b);
}