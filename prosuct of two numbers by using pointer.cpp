#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b ;
	int *x=&a;
	int *y=&b;
	int product = (*x)*(*y);
	cout<<product ;
}
