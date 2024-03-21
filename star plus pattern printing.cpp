#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
	int mid=x/2+1;
	for(i=1; i<=x; i++){
		for(j=1; j<=x; j++){
			if(i==mid || j==mid){
				cout<<"*";
			}
			else{
				cout<<" ";
		}
		}
		cout<<"\n";
	}
}

