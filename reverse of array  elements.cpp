#include <iostream>
#include <vector>
using namespace std ;
void display(vector<int>&a){
	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int size;
	cout<<"enter size of vector : ";
	cin>>size;
	vector<int>v1;
	for(int i=0; i<size; i++){
		int x;
		cin>>x;
		v1.push_back(x);
	}
	display(v1);
	vector <int> v2(v1.size());
	for(int i=0; i<v1.size(); i++){
		int j=v1.size()-1-i;
		v2[i]=v1[j];
	}
	display(v2); 
}

