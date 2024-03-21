#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0; i<10; i++){
		cout<<"enter element "<<i+1<<" : " ;
		cin>>arr[i];
	}
	int x;
	cout<<"enter doublet sum number we want : ";
	cin>>x;
	for(int i=0; i<=8;i++){
		for(int j=1; j<=9; j++){
			if(i+j==x){
				cout<<"the doublet is : "<<i<<" "<<j<<endl;c
			}
		}
	}
}
