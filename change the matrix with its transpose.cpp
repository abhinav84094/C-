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
	int arr[m][n] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter rows number "<<i+1<<" and column number "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix  : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
	cout<<endl;
//	int trans[n][m];
//	cout<<"Transpose of matrix : "<<endl ;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			trans[i][j]=arr[j][i];
//		}
//	}
//	for(int i=0; i<n; i++){
//		for(int j=0; j<m; j++){
//			cout<<arr[j][i]<<" ";
//		}
//		cout<<endl ;
//	}
	for(int i=0; i<m; i++){
		for(int j=i+1; j<n; j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	cout<<"Matrix : "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
}
