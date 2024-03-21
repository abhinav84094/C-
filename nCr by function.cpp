#include <iostream>
using namespace std;
int fact(int x){
	int f=1;
	for(int i=1; i<=x; i++){
		f*=i;
	}
	return f;
}
int combination(int n, int r){
		int nCr = fact(n)/(fact(r)*fact(n-r));
		return nCr;
}
int permutation(int n, int r){
	int nPr=fact(n)/fact(n-r);
	return nPr;
}
int main(){
	int n, r;
	cout<<"enter n: ";
	cin>>n;
	cout<<"enter r: ";
	cin>>r;
	int nfact=fact(n);
	int rfact=fact(r);
	int nrfact=fact(n-r);
//	int nCr = nfact/(rfact*nrfact);
	cout<<"nfact = "<<fact(n)<<endl;
	cout<<"rfact = "<<fact(r)<<endl;
	cout<<"nrfact = "<<fact(n-r)<<endl;
	cout<<"nCr = "<<combination(n,r)<<endl;
	cout<<"nPr = "<<permutation(n,r)<<endl;
}
