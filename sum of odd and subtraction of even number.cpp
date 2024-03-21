#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number: " ;
	cin>>n;
	int i,j;
	int sum=0;
	for(i=1; i<=n; i++){
		if(i%2!=0){
			sum=sum+i ;
		}
        else{
            sum=sum-i ;
        }
	}
      cout<<"ans : "<<sum ;
}
