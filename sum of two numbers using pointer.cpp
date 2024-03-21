#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two numbers : ";
//	cin>>a>>b;
//	int *p= &a;
//	int *p1=&b;
//	int sum= *p+*p1;
//	cout<<"sum = "<<sum ;

	int *p= &a;
	int *p1=&b;
	cin>>*p>>*p1;
	int sum= *p+*p1;
	cout<<"sum = "<<sum ;
}
