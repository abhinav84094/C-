#include <iostream>
using namespace std;
int main(){
	int t ;
	cout<<"enter target : ";
	cin>>t;
	int arr[]= {1,2,2,3,3,3,3,3,4,4,5,8,9} ;
	int n=13;
	cout<<"first occurance of element in sorted array "<<t<<" : "<<endl;
	int mid;
	int low=0 ;
	int high= n-1;
	bool flag= false ;
	while(low<=high){
		mid=(high+low)/2 ;
		if(arr[mid]==t){
			if(arr[mid-1]!=t){
				flag = true ;
				cout<<mid;
				break;
			}
		else  high= mid-1 ;
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
