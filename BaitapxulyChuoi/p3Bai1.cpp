#include<bits/stdc++.h>
using namespace std;

string add(string a,string b){
	if(a.size()<b.size()) swap(a,b);
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	string rs="";
	int carry=0;
	
	for(int i=0;i<a.size();i++){
		int digitA = a[i]-'0';
		int digitB = (i<b.size())?b[i] -'0':0;
		int total = digitA+digitB+carry;
		rs+=(total%10)+'0';
		carry=total/10;
	}
	
	if(carry>0) rs+='0';
	reverse(rs.begin(),rs.end());
	return rs;
	
}

int main(){
	string a="812317349123232323232323232323232323232318247124";
	string b="12316237123333333333333333333331231";
	cout<<add(a,b);
}