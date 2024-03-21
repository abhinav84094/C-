#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
	for(i=1; i<=x; i++){
		int a=65 ;
		for(j=1; j<=x; j++){
			cout<<char(a)<<" " ;
			a+=1;
		}
		cout<<"\n";
	}
}

