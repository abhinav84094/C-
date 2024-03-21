#include <iostream>
using namespace std;
int power(int a, int b){
	int n=a;
	if(b==0) return 1;
	else{
		for(int i=2; i<=b; i++){
			a= n*a;
		}
	}
	cout<<a;
}
int main(){
	int a,b;
	cout<<"enter base number : ";
	cin>>a;
	cout<<"enter power number : ";
	cin>>b;
	power(a,b);
}
