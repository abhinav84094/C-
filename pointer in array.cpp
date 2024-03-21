#include <iostream>
using namespace std;
int main(){
	int arr[]={1,4,2,7,4};
	int *ptr= arr;  //this means giving address
	cout<<ptr<<endl;
	for(int i=0; i<=4;i++){
		cout<<ptr[i]<<" ";
	}
}
