#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	int arr[n];
	for(int i=0; i<=n-1 ; i++){
		cin>>arr[i];
	}
	int x=arr[0];
	for(int i=0; i<=n-1; i++){
		if(arr[i]>x){
			x=arr[i];
		}
	}
	cout<<"the maximum element in array = "<<x;
}
