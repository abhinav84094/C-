#include <iostream>
using namespace std;
int main(){
	int radius;
	cout<<"enter radius of circle: " ;
	cin>>radius ;
	float pi=3.14 ;
	float area= pi*radius*radius ;
	cout<<"area= "<<area<<endl ;
	float circumference= 2*pi*radius ;
	cout<<"circumference= "<< circumference <<endl ;
	if(area>circumference){
		cout<<"area is greatest" ;
	}
	else if(circumference>area){
		cout<<"circumference is greatest" ;
	}
	else{
		cout<<"area and circumference are equal" ;
	}
}
