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
	int m;
	cout<<"enter number of rows\column of matrix : ";
	cin>>m;
	int arr[m][m] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cout<<"enter rows number "<<i+1<<" and column number "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix  : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
	cout<<endl;
	for(int i=0; i<m; i++){
		for(int j=i+1; j<m; j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	for(int k=0; k<m; k++){
		int i=0; 
		int j=m-1;
		while(i<=j){
			int temp=arr[k][i];
			arr[k][i]=arr[k][j];
			arr[k][j]=temp ;
		}
	}
	cout<<"Rotated Matrix : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
}
