#include <iostream>
using namespace std;
int main(){
	char fname[20], lname[20];
	cout<<"enter your first name : ";
	cin>>fname;
	cout<<"enter your last name : ";
	cin>>lname;
	
	char ffname[20], flname[20];
	cout<<"enter your father's first name : ";
	cin>>ffname;
	cout<<"enter your father's last name : ";
	cin>>flname;

	int classn ;
	cout<<"in which class do you study : ";
	cin>>classn;
	
	char address[20];
	cout<<"where do you live : ";
	cin>>address;
	
	char hobby[20];
	cout<<"what is your hobby: ";
	cin>>hobby;
	
	int marks;
	cout<<"your marks in "<<classn-1<<" :";
	cin>>marks;
	
	
	cout<<endl<<"   Welcome   "<<endl;
	cout<<"my name is "<<fname<<" "<<lname<<endl;
	cout<<"my father's name is "<<ffname<<" "<<flname<<endl;
	cout<<"i study in class "<<classn<<endl ;
	cout<<"i live in "<<address<<endl;
	cout<<"my hobby is "<<hobby<<endl;
	cout<<"i got "<<marks<<" marks in "<<classn-1<<endl;
	cout<<"    Thank You";
}
