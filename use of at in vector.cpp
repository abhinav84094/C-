#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(6);
	v.push_back(1);
	v.push_back(9);
	v.push_back(0);
	cout<<"size of v = "<<v.size()<<endl;
	cout<<"capacity of v = "<<v.capacity()<<endl;
	v.at(2)=90;
	cout<<v.at(2)<<endl;
	for(int i=0; i<v.size(); i++){
		cout<<v.at(i)<<" ";
	}
}
