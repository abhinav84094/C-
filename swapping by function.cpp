#include <iostream>
using namespace std;
 void swap(int *p1, int *p2){
	int temp= *p1 ;
	*p1=*p2;
	*p2= temp;
	return;
}
int main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
//	int temp=a;
//	a=b;
//	b=temp;
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
	
//	a=a+b;
//	b=a-b;
//	a=a-b;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	swap(&a,&b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}

