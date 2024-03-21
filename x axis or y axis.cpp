#include <iostream>
using namespace std;
int main(){
	int x, y ;
	cout<<"enter x point: ";
	cin>>x;
	cout<<"enter y point: ";
	cin>>y;
	if(x==0 && y==0){
		cout<<"at the origin" ;
	}
	else if(x==0){
		cout<<"on the y axis" ;
	}
	else if(y==0){
		cout<<"on the x axis" ;
 	}
 	else{
 		cout<<"anywhere" ;
	 }
}
