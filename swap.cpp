#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
//	int temp=a;
//	a=b;
//	b=temp;
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
