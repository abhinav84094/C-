#include <iostream>
using namespace std;
//void display(int &arr , int m, int n){
//	for(int i=0; i<m; i++){
//		for(int j=0; j<n; j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl ;
//	}
//}
int main(){
	int m,n;
	cout<<"enter number of rows of matrix : ";
	cin>>m;
	cout<<"enter number of columns of matrix : ";
	cin>>n;
	int arr1[m][n] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter rows number "<<i+1<<" and column number "<<j+1<<" : ";
			cin>>arr1[i][j];
		}
	}
	int arr2[m][n] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter rows number "<<i+1<<" and column number "<<j+1<<" : ";
			cin>>arr2[i][j];
		}
	}
	cout<<"Matrix 1 : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl ;
	}
	cout<<"Matrix 2 : "<<endl ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl ;
	}
	int sum[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			sum[i][j]=arr1[i][j] + arr2[i][j] ;
 		}
	}
	cout<<"Sum of matrix1 and matrix2 : "<<endl ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl ;
	}
}

