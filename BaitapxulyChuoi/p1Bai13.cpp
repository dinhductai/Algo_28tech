#include<iostream>
using namespace std;

bool check(string s){
	int l=0,r=s.size()-1,cnt=0;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;r--;
	}
	if(s.size() %2==0 && cnt==0){
		return false;
	}
	if(cnt>=2){ return false;
	}
	return true;
}

int main(){
	cout<<check("abcdcdca");
}