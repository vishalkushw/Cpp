#include <iostream>
using namespace std;
int main(){
	char gender;
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Are you male 'y' or 'n' : " ;
	cin>>gender;
	age>=21 &&gender=='y'?cout<<"you are eligible for marriage":
	cout<<"you are not eligible for marriage";
	
}
