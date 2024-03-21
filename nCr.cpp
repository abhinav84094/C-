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
	cout<<"nfact = "<<nfact<<endl;
	int rfact=1;
	for(int i=1; i<=r; i++){
		rfact*=i ;
	}
	cout<<"rfact"<<rfact<<endl;
	
	int nrfact=1; //(n-r)factorial
	for(int i=1; i<=n-r; i++){
		nrfact*=i;
	}
	cout<<"nrfact= "<<nrfact<<endl;
	int ncr=nfact/(rfact*nrfact);
	cout<<"ncr= "<<ncr;
}
