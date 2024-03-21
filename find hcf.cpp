#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two numbers : "<<endl;
	cin>>a>>b;
	int mi= min(a,b);
	int hcf=1;
//	for(int i=1; i<=mi; i++){
//		if(a%i==0 && b%i==0){
//			hcf=i;
//		}
//	}
	for(int i=mi; i>=1; i--){
		if(a%i==0 && b%i==0){
			hcf=i;
			break;
		}
	}
	cout<<"the hcf of "<<a<<" and "<<b<<" = "<<hcf;
}
