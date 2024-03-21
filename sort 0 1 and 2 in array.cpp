#include <iostream>
using namespace std;
void display(int v[], int x){
	for(int i=0; i<x; i++){
		cout<<v[i]<<" " ;
	}
	cout<<endl;
}
void sort01(int v[], int x){
	int n=x;
	int no1=0 ;
	int no0=0 ;
	int no2=0 ;
	for(int i=0; i<n; i++){
		if(v[i]==0){
			no0+=1;
		}
		else if(v[i]==1){
			no1+=1 ;
		}
		else{
			no2+=1 ;
		}
	}
	for(int i=0; i<n; i++){
		if(i<no0){
			cout<<0<<" ";
		}
		else if(i<(no0+no1)){
			cout<<1<<" ";
		}
		else{
			cout<<2<<" ";
		}
	}
	cout<<endl;
	return ;
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
