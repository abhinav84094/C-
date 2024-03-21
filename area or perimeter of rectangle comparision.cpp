#include <iostream>
using namespace std ;
int main(){
	int l, b ;
	cout<<"enter length of rectangle: ";
	cin>>l ;
	cout<<"enter breadth of rectangle: ";
	cin>>b ;
	int area= l*b ;
	cout<<"area= "<<area<<endl ;
	int perimeter= 2*(l+b) ;
	cout<<"perimeter= "<<perimeter<<endl ;
	if(area==perimeter){
		cout<<"area and perimeter area equal" ;
	}
	else if(area> perimeter){
		cout<<"area is greatest" ;
	}
	else{
		cout<<"perimeter is greatest" ;
	}
}
