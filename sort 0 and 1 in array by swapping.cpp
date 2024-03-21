#include <iostream>
using namespace std;
void display(int v[], int x){
	for(int i=0; i<x; i++){
		cout<<v[i]<<" " ;
	}
	cout<<endl;
}
void sort01(int v[], int x){
	int i=0;
	int j=x-1 ;
	while(i<j){
		if(v[i]==1 && v[j]==0){
			int temp=0;
			temp=v[i];
			v[i]=v[j];
			v[j]=temp;
			i++ ;
			j-- ;
		}
		if(v[i]==0){
			i++ ;
		}
		if(v[j]==1){
			j-- ;
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
	sort01(v, x) ; 
}
