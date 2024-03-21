#include <iostream>
using namespace std;
int main(){
	float x1,x2,x3,y1,y2,y3 ;
	cout<<"enter x1 points: ";
	cin>>x1 ;
	cout<<"enter x2 points: ";
	cin>>x2 ;
	cout<<"enter x3 points: ";
	cin>>x3 ;
	cout<<"enter y1 points: ";
	cin>>y1 ;
	cout<<"enter y2 points: ";
	cin>>y2 ;
	cout<<"enter y3 points: ";
	cin>>y3 ;
	float slope1= (y2-y1)/(x2-x1);
	cout<<"slope1= "<<slope1<<endl ;
	float slope2= (y3-y2)/(x3-x2) ;
	cout<<"slope2= "<<slope2<<endl ;
	if(slope1==slope2){
		cout<<"it lies on straight line" ;
	}
	else{
		cout<<"it doesnot lies on straight line" ;
 	}
}
