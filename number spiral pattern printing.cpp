#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	int a=2*n-1;
	
	for(int i=1; i<=a; i++){
		for(int j=1; j<=a; j++){
			int x=i;
			int y=j;
			if(x>n){
				x=2*n-i;
			}
			if(y>n){
				y=2*n-j;
			}
			int z=min(x,y);
			cout<<n-z+1;
		}
		cout<<endl;
	}
}
