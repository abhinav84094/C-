#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		
		for(int j=i; j>=1; j--){
			cout<<char(j+64);
		}
		for(int j=1; j<=i-1; j++){
			cout<<char(j+65);
		}
		cout<<endl;
	}
}
