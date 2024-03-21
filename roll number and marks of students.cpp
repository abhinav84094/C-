#include <iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter number of students : ";
	cin>>m;
	cout<<"enter number of subjects : ";
	cin>>n;
	int arr[m][n] ;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"enter roll number "<<i+1<<" and subject code number "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
//			cout<<"marks of roll number "<<i+1<<" subject code "<<j+1<<" : "<<arr[i][j]<<endl;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl ;
	}
}

