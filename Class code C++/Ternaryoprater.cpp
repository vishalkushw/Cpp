#include <iostream>
using namespace std;
int  main(){
	//a?b:c;
	//a boolean expression
	//b statement execute,a result  true
	int age;
	char choise;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Are you indian 'y' or 'n' ???";
	cin>>choise;
	age>=18 &&choise=='y'?cout<<"you are eligible for vote":cout<<"you are not eligible for vote";
	
}
