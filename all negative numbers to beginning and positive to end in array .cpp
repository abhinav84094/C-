#include <iostream>
using namespace std;
void display(int v[], int x){
	for(int i=0; i<x; i++){
		cout<<v[i]<<" " ;
	}
	cout<<endl;
}
void noofpositive(int v[], int x){
	int pos=0;
	for(int i=0; i<x; i++){
		if(v[i]>=0){
			pos++ ;
		}
	}
	cout<<"total number of positive elements is : "<<pos<<endl ;
}
void noofnegative(int v[], int x){
	int neg=0;
	for(int i=0; i<x; i++){
		if(v[i]<0){
			neg++ ;
		}
	}
	cout<<"total number of negative elements is : "<<neg<<endl ;
}
void negpos(int v[], int x){
	for(int i=0; i<x; i++){
		if(v[i]<0){
			cout<<v[i]<<" ";
		}
	}
	for(int i=0; i<x; i++){
		if(v[i]>=0){
			cout<<v[i]<<" ";
		}
	}
}
int main(){
	int x;
	cout<<"enter size of array : ";
	cin>>x;
	int v[x];
	for(int i=0; i<x; i++){
		cout<<"enter element 0 or 1 : " ;
		cin>>v[i];
	}
	display(v, x) ;
	noofpositive(v, x);
	noofnegative(v,x); 
	negpos(v, x);
}
