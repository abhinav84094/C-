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
	int x;
	cout<<"enter the number that you want to search in array : "<<endl;
	cin>>x;
	int count=0;
	for(int i=0; i<=n-1; i++){
		if(arr[i]>x){
			count++ ;
		}
	}
	cout<<"the number of elements in array greater than "<<x<<" is : "<<count;
}
