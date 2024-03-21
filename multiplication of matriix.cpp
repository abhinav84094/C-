#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter number of rows of matrix1 : " ;
	cin>>m;
	cout<<"enter number of columns of matrix1 : ";
	cin>>n;
	int arr1[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter elements of matrix1 : ";
			cin>>arr1[i][j];
		}
	}
	cout<<endl;
	int p,q;
	cout<<"enter number of rows of matrix2 : " ;
	cin>>p;
	cout<<"enter number of columns of matrix2 : ";
	cin>>q;
	int arr2[p][q];
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			cout<<"enter elements of matrix2 : ";
			cin>>arr2[i][j];
		}
	}
	cout<<endl;
	cout<<"Matrix1  : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Matrix2  : "<<endl;
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	int res[m][q];
	if(n==p){
		for(int i=0; i<m; i++){
			for(int j=0; j<q; j++){
				res[i][j]=0;
				for(int k=0; k<p; k++){
					res[i][j]= arr1[i][k]*arr2[k][j] +res[i][j];
				}
			}
		}	
	}
	else{
		cout<<"we can't find multiplication of this matrix ";
	}
	cout<<endl;
	cout<<"Multiplication of Matrix : "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<q; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
