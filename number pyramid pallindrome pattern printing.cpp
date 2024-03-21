#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number : ";
	cin>>n;
	
//	for(int i=1; i<=n; i++){
//		int z=1;
//		for(int j=1; j<=n-i; j++){
//			cout<<" " ;
//		}
//		for(int k=1; k<=i; k++){
//			cout<<z ;
//			z++;
//		}
//		for(int l=i-1; l>=1; l--){
//			cout<<l;
//		}
		
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" " ;
		}
		for(int k=1; k<=i; k++){
			cout<<k ;
			
		}
		for(int l=i-1; l>=1; l--){
			cout<<l;
		}
		cout<<endl;
	}
}
