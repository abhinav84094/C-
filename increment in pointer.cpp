#include <iostream>
using namespace std;
int main(){
	int a=5;
	int *ptr=&a ;
	int b=++(*ptr);
	cout<<a<<" "<<b ;
}
