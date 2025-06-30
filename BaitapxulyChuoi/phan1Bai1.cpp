#include<iostream>
using namespace std;

bool is_lower(char c){
	if(c>=97 && c<=122){
		return true;
	}else return false;
}

bool is_upper(char c){
	if(c>=65 && c<=90){
		return true;
	}
	else return false;
}

bool is_alpha(char c){
	if(c>=65 && c<=90 || c>=97 && c<=122){
		return true;
	}
	else return false;
}

bool is_digit(char c){
	if(c>=48 && c<=57){
		return true;
	}
	else return false;
}

char to_lower(char c){
	if(c>=97 && c<=122){
		c-=32;
		return c;
	}
}

char to_upper(char c){
	if(c>=65 && c<=90){
		c+=32;
		return c;
	}
}

int strlen(string c){
	int count =0;
	for(int i=0;i<c.size();i++){
		count++;
	}
	return count;
}

char* strlwr(char c[]){
	for(int i=0;c[i]!='\0';i++){
		if(c[i] >= 65 && c[i] <=90){
			c[i]+=32;
		}
	}
	return c;
}
//or
string strlwr2(string c){
	string rs="";
	for(int i=0;i<c.size();i++){
		if(c[i] >= 65 && c[i]<=90){
			rs+=c[i]+32;
		}else{
			rs+=c[i];
		}
		
	}
	return rs;
}


string strupr(string c){
	string rs="";
	for(int i=0;i<c.size();i++){
		if(c[i]>=97 && c[i]<=122){
			rs+=c[i]-32;
		}
		else{
			rs+=c[i];
		}
	}
	return rs;
}

int strcmp(string a,string b){
	if(a==b && a.size()== b.size()){
		return 0;
	}
	else if(a>b){
		return 1;
	}else return -1;
}

long long atoll(string c){
	long long rs=0;
	for(int i=0;i<c.size();i++){
		rs=rs*10 + (c[i]-48);
	}	
	return rs;
}

string strrev(string c){
	string rs="";
	for(int i=c.size()-1;i>=0;i--){
		rs+=c[i];
	}
	return rs;
}


int main(){
	string a,b;
	getline(cin,a);
	cout<<strrev(a);
	return 0;
}