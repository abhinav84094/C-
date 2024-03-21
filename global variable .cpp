#include <iostream>
using namespace std;
int a=9; //global variable
void f(){
	cout<<a;
}
int main(){
	cout<<a+7<<endl;
	f();
}
