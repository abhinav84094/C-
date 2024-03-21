#include <iostream>
using namespace std;
int odd(int x, int y){
	if(x>y) odd(y,x);
		for(int i=x; i<=y; i++){
			if(i%2!=0) cout<<i<<" ";
		}
}
int main(){
	int a,b;
	cout<<"enter a number: ";
	cin>>a;
	cout<<"enter second number : ";
	cin>>b;
	odd(a,b);
}
