#include <iostream>
using namespace std;
int main(){
	int a,b,c ;
	cout<<"enter 1st student marks: " ;
	cin>>a ;
	cout<<"enter 2nd student marks: " ;
	cin>>b;
	cout<<"enter 3rd student marks: " ;
	cin>>c ;
if(a<=b && b<=c){
    cout<<a<<" is least marks" ;
    }
else if(b<=a && b<=c){
    cout<<b<<" is least marks" ;
    }
else{
    cout<<c<<" is least marks" ;
    }
}
