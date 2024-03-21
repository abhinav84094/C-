#include <iostream>
#include <vector>
void change(std::
vector<int>&a){
	a[0]=100;
};
using namespace std;
int main(){
	vector<int>v;
	v.push_back(6);
	v.push_back(1);
	v.push_back(4);
	for(int i=0;i<4; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	change(v);
	for(int i=0;i<4; i++){
		cout<<v[i]<<" ";
	}
}
