#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter number of rows of matrix : ";
	cin>>m;
	cout<<"enter number of columns of matrix : ";
	cin>>n;
	int arr[m][n] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter rows number "<<i+1<<" and column number "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
	int max=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(max<=arr[i][j]){
				max=arr[i][j] ;
			}
		}
	}
	cout<<"the largest element of array = "<<max<<endl ;
}

