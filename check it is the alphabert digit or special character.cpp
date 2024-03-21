#include <iostream>
using namespace std;
int main(){
	char x;
	cout<<"enter any character: ";
	cin>>x;
	int y= (int)x ;
	cout<<y<<"\n" ;
	if(y>=48 && y<=57){
		cout<<"digit" ;
	}
	else if(y>=65 && y<=90){
		cout<<"capital leter alphabet" ;
	}
	else if(y>=97 && y<=122){
		cout<<"small letter alphabet" ;
	}
	else{
		cout<<"special character" ;
	}
}
