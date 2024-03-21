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
		int a=65;
		for(int j=1; j<=2*i-1; j++){
			cout<<char(a);
			a++;
		}
		cout<<endl;
	}
}
