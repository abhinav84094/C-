#include <iostream>
using namespace std;
float area(float r){
	float pi=3.1415;
	float ans=pi*r*r;
	return ans ;
}
int main(){
	float r;
	cout<<"enter radius of circle : ";
	cin>>r;
	cout<<area(r) ;
}
