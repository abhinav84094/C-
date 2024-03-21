#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(6);
	v.push_back(1);
	v.push_back(4);
	v.push_back(8);
	v.push_back(6);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	for(int i=0;i<8; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	int x=2;
	int idx=-1;
	for(int i=v.size(); i>0; i--){
		if(v[i]==x){
			idx=i;
			break;
		}
	}
	cout<<idx;
}
