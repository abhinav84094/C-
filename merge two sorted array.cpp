#include <iostream>
using namespace std;

int main(){
	int arr1[4]={1,4,5,8} ;
	int arr2[6]= {2,3,6,7,10,12};
	int arr3[10];
	int i=0, j=0, k=0;
	for(i=0; i<10; i++){
		for(j=0; j<10;j++){
			if(arr1[i]<arr2[j]){
				arr3[i]=arr1[i];
			}	
			else arr3[i]=arr2[j];
		}
	}
	for(k=0; k<10; k++){
		cout<<arr3[10] ;
	}
}
