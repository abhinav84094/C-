#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=x-i; j++){
			cout<<" ";
		}
		for(int k=1; k<=i; k++){
			cout<<k;
		}
		cout<<"\n";
	}
}

