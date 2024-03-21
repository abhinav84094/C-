#include <iostream>
using namespace std;
int main(){
	int a,b,c ;
	cout<<"enter 1st side: " ;
	cin>>a ;
	cout<<"enter 2nd side: " ;
	cin>>b;
	cout<<"enter 3rd side: " ;
	cin>>c ;
	if(a==b){
		if(b==c){
				cout<<"this is equilateral triangle" ;
			}
		else{
				cout<<"this is isosceles triangle" ;
		}
	}
	else if(b==c){
		if(c==a){
			cout<<"this is equilateral triangle" ;
		}
		else{
			cout<<"this is isosceles triangle" ;
		}
	}
	else{
		cout<<"this is scelene triangle" ;
	}
	
}
