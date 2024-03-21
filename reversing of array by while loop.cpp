#include<iostream>
#include <conio.h>

using namespace std;
void display(int a[], int size){
	for(int i=0; i<=size-1; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return ;
}
void reverse(int arr[], int firstidx, int lastidx){
	int temp=0;
	while(firstidx<lastidx){
		temp=arr[firstidx];
		arr[firstidx]=arr[lastidx];
		arr[lastidx]=temp;
		firstidx++;
		lastidx-- ;
	}
}
int main(){
	int x[4];
	cout<<"enter elements of array : ";
	for(int i=0; i<4; i++){
		cin>>x[i];
	}
	display(x, 4) ;
	reverse(x, 0, 3);
	display(x, 4) ;
}
