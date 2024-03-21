#include <iostream>
#include <vector>
using namespace std ;
void display(vector<int>&a){
	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void reversepart(int i, int j, vector<int> &v){
	while(i<=j){
		int temp=v[i];
		v[i]=v[j];
		v[j]=temp;
		j-- ;
		i++ ;
	}
	return;
}
int main(){
	int size;
	cout<<"enter size of vector : ";
	cin>>size;
	vector<int>v;
	for(int i=0; i<size; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	display(v);
	int i=0;
	int j=v.size()-1;
	reversepart(0,2,v);
	display(v);
}

