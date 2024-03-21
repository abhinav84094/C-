 #include <iostream>
 using namespace std;
 int main(){
 	int x;
 	cout<<"enter a number: ";
 	cin>>x ;
 	int a=1 , b=1 , sum=0 ;
 	int i ;
 	for(i=1; i<=x-2; i++){
 		cout<<a<<"\n" ;
 		sum=a+b ;
 		a=b;
 		b=sum ;
	 }
 }
