#include <iostream>
using namespace std;
int main(){
	int arr[10];
	for(int i=0; i<10; i++){
		cout<<"enter element "<<i+1<<" : " ;
		cin>>arr[i];
	}
	int x;
	cout<<"enter number that occurrence we want : ";
	cin>>x;
	for(int i=9; i>=0; i--){
		if(arr[i]==x){
			cout<<"the last occurrence of "<<x<<" is : "<<i<<" index"<<endl;
			break;
		}
	}
}
