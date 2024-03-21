#include <iostream>
using namespace std ;
int main(){
	int i;
	for(i=1; i<=500; i++){
		int z=i ;
		int cubesum= 0;
		while(z>0){
			int ld= z%10 ;
			cubesum += (ld*ld*ld);
			z= z/10 ;
		}
		if(i==cubesum){
			cout<<cubesum<<endl ;
	}
	}
}
