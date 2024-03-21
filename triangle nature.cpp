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
if(a==b && b==c){
    cout<<"this is equilateral triangle" ;
    }
else if(a==c || a==b || b==c){
    cout<<"this is isoscles triangle" ;
    }
else{
    cout<<"this is scelene triangle" ;
    }
}
