#include <iostream>
using namespace std;
int main(){
	int x ;
	cout<<"enter number of rows : " ;
	cin>>x;
	int i,j;
//	int z=5;
//	for(i=1; i<=x; i++){
//		if(i%2!=0){
//			z=1;
//		}
//		else{
//			z=0;
//		}
//		for(j=1; j<=i; j++){
//			cout<< z;
//			if(z==1){
//				z=0;
//			}
//			else{
//				z=1;
//			}
//		
//		}
//		cout<<"\n";
//	}
	for(i=1; i<=x; i++){
		for(j=1; j<=i; j++){
			if((i+j)%2==0){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		cout<<endl ;
	}
}

