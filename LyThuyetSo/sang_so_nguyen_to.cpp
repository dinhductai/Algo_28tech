#include<bits/stdc++.h>
using namespace std;

//Mục đích: liệt kê, đếm các số nguyên tố nhỏ hơn hoặc bằng N

// ý tưởng là dùng một mảng để đánh dấu lại các số nt, sau đó muốn lấy ra số nào thì sẽ nhanh hơn

const int n = 1000001;
bool nguyenToArr[n];


//void sangSoNguyenTo(){
////cho mặc định tất cả số 0-N đều là nguyên tố
//	for(int i=0;i<=n;i++){
//		nguyenToArr[i] = true;
//	}
////	memset(nguyenToArr,true,sizeof(nguyenToArr));
//	//mặc định bỏ số 0 và 1
//	nguyenToArr[0] = nguyenToArr[1] = false;
//	for(int i =2; i <= sqrt(n); i++){
//		if(nguyenToArr[i]){
//			for(int j = i*i; j<=n ; j+=i){
//				nguyenToArr[j] =  false;
//			} 
//		}
//	}
//}

void sangSoNguyenTo(){
	for(int i=0;i<=n;i++){
		nguyenToArr[i] = true;
	}
	
	nguyenToArr[0]=nguyenToArr[1]=false;
	for(int i=2;i<=sqrt(n);i++){
		if(nguyenToArr[i]){
			for(int j=i*i;j<=n;j+=i){
				nguyenToArr[j]=false;
			}
		}
	}
}

//phân tích thừa số nguyên tố
void phanTichThuaSoNguyenTo(int n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			cout<< i <<" ";
			n/=i;
		}
	}
	if(n>1) cout<<n;
}

//int uocChungLonNhat(int a,int b){
//	while(b!=0){
//		int r = a%b;
//		a=b;
//		b=r;
//	}
//	return a;
//}

//long long uocChungLonNhat(int a,int b){
//	while(b!=0){
//		int r = a%b;
//		a=b;
//		b=r;
//	}
//	return a;
//}

long long uocChungLonNhat(int a,int b){
	if(b==0) return a;
	else{
		return uocChungLonNhat(b,a%b);
	}
}

long long boiChungNhoNhat(int a,int b){
	return (a*b)/uocChungLonNhat(a,b);
}



int main(){
//	sangSoNguyenTo();
//	for(int i =0;i<=1000;i++){
//		if(nguyenToArr[i]) cout<<i<<" ";
//	}	
//	cout<<endl<<endl;
////	phanTichThuaSoNguyenTo(80);
	cout<<boiChungNhoNhat(4,6);
}
	