#include <iostream>
using namespace std;
int main(){
	int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0,n2000=0 ;
	int n;
	cout<<"enter amount: " ;
	cin>>n;
	if(n>=2000){
		n2000= (n/2000) ;
		n -= (n2000*2000);
	}
	if(n>=500){
		n500= (n/500) ;
		n -= (n500*500) ;
	}
	if(n>=200){
		n200= (n/200) ;
		n -= (n200*200);
	}
	if(n>=100){
		n100= (n/100) ;
		n -= (n100*100) ;
	}
	if(n>=50){
		n50= (n/50) ;
		n -= (n50*50);
	}
	if(n>=20){
		n20= (n/20) ;
		n -= (n20*20) ;
	}
	if(n>=10){
		n10= (n/10) ;
		n -= (n10*10);
	}
	if(n>=5){
		n5= (n/5) ;
		n -= (n5*5) ;
	}
	if(n>=2){
		n2= (n/2) ;
		n -= (n2*2);
	}
	if(n>=1){
		n1= (n/1) ;
		n -= (n1*1) ;
	}
	cout<<"n2000= "<<n2000<<endl ;
	cout<<"n500= "<<n500<<endl ;
	cout<<"n100= "<<n100<<endl ;
	cout<<"n50= "<<n50<<endl ;
	cout<<"n20= "<<n20<<endl ;
	cout<<"n10= "<<n10<<endl ;
	cout<<"n5= "<<n5<<endl ;
	cout<<"n2= "<<n2<<endl ;
	cout<<"n1= "<<n1<<endl ;
	int total= n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000 ;
	cout<<"total number of notes: "<<total ;
}
