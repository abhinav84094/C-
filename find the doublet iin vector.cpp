#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
//	v.push_back(6);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(8);
//	v.push_back(6);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(7);
	int size;
	cout<<"enter size of array : ";
	cin>>size;
	int target ;
	cout<<"enter target : ";
	cin>>target;
	for(int i=0; i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<size; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<size-1;i++){
		for(int j=i+1; j<size; j++){
			if(v[i]+v[j]==target){		
				cout<<"{"<<i<<","<<j<<"}"<<endl;
			}
		}
	}
}
