#include <iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2){
	*ptr2=n%10;
	while(n>9){
	n/=10;
	}
	*ptr1=n;
	return;
}
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
//	int ld=n%10;
//	while(n>9){
//		n/=10 ;
//	}
//	int fd=n;
	
	int fd, ld;
	int *p1=&fd;
	int *p2=&ld;
	find(n, p1, p2);
	cout<<"first digit = "<<fd<<endl;
	cout<<"last digit = "<<ld;
}
