#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" " ;
	}
	cout<<endl;
}
void sort01(vector<int>&v1){
	int n=v1.size();
	int no1=0 ;
	int no0=0 ;
	for(int i=0; i<n; i++){
		if(v1[i]==0){
			no0+=1;
		}
		else{
			no1+=1 ;
		}
	}
	for(int i=0; i<n; i++){
		if(i<no0){
			cout<<0<<" ";
		}
		else{
			cout<<1<<" ";
		}
	}
	cout<<endl;
}
int main(){
	vector <int> v ;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	display(v) ;
	sort01(v) ; 
}
