#include <iostream>
using namespace std;
int digit(int n){
	int a=n;
	int digit=0;
	while(n>0){
		n/=10 ;
		digit++;
	}
	if(a==0){
		cout<<"the number of digit is : "<<1<<endl;
	}
	else	cout<<"the number of digit is : "<<digit<<endl;
	
	int square=digit*digit;
	cout<<"the square of number of digit is : "<<square<<endl;	
}
int main(){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	digit(n);

}
