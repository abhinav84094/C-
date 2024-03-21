#include <iostream>
using namespace std;
int main(){
	int n, r;
	cout<<"enter n: ";
	cin>>n;
	cout<<"enter r: ";
	cin>>r;
	int nfact=1;
	for(int i=1; i<=n; i++){
		nfact*=i;
	}
	cout<<nfact<<endl;
	int rfact=1;
	for(int i=1; i<=r; i++){
		rfact*=i ;
	}
	cout<<rfact<<endl;
}
