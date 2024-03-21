#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		int a=i;
		for(int k=1; k<=i; k++){
			cout<<a;
			a--;
		}
		
		cout<<endl;
	}
}
