#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
	int z=1;
	for(i=1; i<=x; i++){
		for(j=1; j<=i; j++){
			cout<<z<<" ";
			z+=1;
		}
		cout<<"\n";
	}
}

