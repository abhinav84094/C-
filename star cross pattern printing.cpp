#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=x; j++){
			if(i==j || i+j==x+1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}

