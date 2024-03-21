#include <iostream>
using namespace std;
int main(){
	int t ;
	cout<<"enter target : ";
	cin>>t;
	int arr[]= {1,2,4,5,9,15,18,21,24} ;
	int n=9;
	cout<<"Upper bound of "<<t<<" : "<<endl;
	for(int i=0; i<n; i++){
		if(arr[i]>t){
			cout<<arr[i];
			break;
		}
	}	
}				
