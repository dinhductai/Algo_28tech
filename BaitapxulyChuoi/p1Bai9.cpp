#include<iostream>
using namespace std;

int markA[255] = {0};
int markB[255] = {0};

void unionStr(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        markA[a[i]] = 1;
    }
    for (int i = 0; i < b.size(); i++) {
        markB[b[i]] = 1;
    }

    for (int i = 0; i < 256; i++) {
        if (markA[i] || markB[i]) {
            cout << (char)i;
        }
    }
}

int main() {
    string a = "Abcdu";
    string b = "abcdz";
    unionStr(a, b); 
}
