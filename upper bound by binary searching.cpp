#include <iostream>
using namespace std;
int main(){
	int t ;
	cout<<"enter target : ";
	cin>>t;
	int arr[]= {1,2,4,5,9,15,18,21,24} ;
	int n=9;
	cout<<"Lower bound of "<<t<<" : "<<endl;
	int mid;
	int low=0 ;
	int high= n-1;
	bool flag= false ;
	while(low<=high){
		mid=(high+low)/2 ;
		if(arr[mid]==t){
			flag= true;
			cout<<arr[mid+1];
			break;
		}
		else if(arr[mid]>t){
			high=mid-1;
		}
		else if(arr[mid]<t){
			low=mid+1;
		}
	}	
	if(flag==false) cout<<arr[low];
}				
