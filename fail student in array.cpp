#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number of students : ";
	cin>>n;
	int marks[n];
	for(int i=0; i<=n-1;i++){
		cout<<"enter the marks of roll "<<i+1<<" =";
		cin>>marks[i];
	}
	for(int i=0; i<=n-1; i++){
		if(marks[i]<35){
			cout<<"Roll number "<<i+1<<" is fail"<<endl;
		}
	}
}
