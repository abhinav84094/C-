#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(6);
	v.push_back(1);
	v.push_back(9);
	v.push_back(0);
	v.push_back(8);
	v.push_back(6);
	v.push_back(4);
	v.push_back(7);
	v.push_back(5);
	v.push_back(4);
	v.push_back(4);
	v.push_back(6);
	v.push_back(3);
	
	cout<<"size of v = "<<v.size()<<endl;
	cout<<"capacity of v = "<<v.capacity()<<endl;
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl<<endl;
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	v.pop_back();
	cout<<"size of v = "<<v.size()<<endl;
	cout<<"capacity of v = "<<v.capacity()<<endl;
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
}
