#include <iostream>
using namespace std;
int main(){
	int x,y ;
	cout<<"enter number of rows : " ;
	cin>>x;
	cout<<"enter number of stars : " ;
	cin>>y ;
	int i,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=y; j++){
			cout<<"*" ;
		}
		cout<<"\n";
	}
}
