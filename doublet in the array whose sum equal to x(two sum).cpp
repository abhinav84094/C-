#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0; i<8; i++){
		cout<<"enter element "<<i+1<<" : " ;
		cin>>arr[i];
	}
	int x;
	cout<<"enter doublet sum number we want : ";
	cin>>x;
	for(int i=0; i<7;i++){
		for(int j=i+1; j<8; j++){
			if(arr[i]+arr[j]==x){
				cout<<"the doublet index is : "<<i<<" "<<j<<endl;
			}
		}
	}
}
