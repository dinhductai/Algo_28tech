#include<bits/stdc++.h>
using namespace std;

void check(string a,string b){
	if (b.find(a) != string::npos) {
        // Nếu tìm thấy -> in YES
        cout << "YES";
    } else {
        // Nếu không tìm thấy -> in NO
        cout << "NO";
    }
}

int main(){
	string a="abcdea";
	string b="azhuywfjalzabcde";
	check(a,b);
}