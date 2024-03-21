#include <iostream>
using namespace std;
//void display(int &arr, int size){
//	for(int i=0; i<size; i++){
//		cout<<arr[i]<<" ";
//	}
//}
int main(){
	int size, arr[size];
	cout<<"enter size of array : ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"enter element "<<i+1<<" : " ;
		cin>>arr[i];
	}
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int i=0;
	int j=size-1;
	while(i<=j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j-- ;
		i++ ;
	}
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}
