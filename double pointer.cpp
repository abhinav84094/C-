#include <iostream>
using namespace std;
int main(){
	int a=3;
	int *ptr=&a;
	int **p=&ptr;
	cout<<a<<endl;
	cout<<*ptr<<endl;
	cout<<**p<<endl;
	cout<<&a<<endl;
	cout<<ptr<<endl;
	cout<<*p<<endl;
	cout<<p;
}
