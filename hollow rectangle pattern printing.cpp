#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter row: ";
	cin>>n;
	int m;
	cout<<"enter column: ";
	cin>>m;
	for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(i==1 || i==n || j==1 || j==m){
					cout<<"*";
				}
				else cout<<" ";
			
		}
		cout<<endl;
	}
}
