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
	cout<<v[0]<<" ";
	cout<<v[1]<<" ";
	cout<<v[2]<<" ";
	cout<<v[3]<<" ";
	cout<<endl;
	v[0]=88;
	cout<<v[0]<<" ";
}
