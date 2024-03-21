#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter square number : ";
	cin>>x;
	int mid;
	int low=0 ;
	int high= x/2;
	while(low<=high){
		mid= (high+low)/2 ;
		if(mid*mid==x){
			cout<<mid;
			break;
		}
		else if(mid*mid <x){
			low=mid+1;
		}
		else{
			high = mid-1 ;
		}
	}
}
