#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	char choise='y';
	try{
		cout<<"enter two number:";
		cin>>num1>>num2;
		if (num1+num2>100){
			throw num1+num2;
}
		cout<<"add: "<<num1+num2<<endl;
		cout<<"do u wan to continue 'y' or 'e' :";
		cin>>choise;
		
		if(choise!='y'&&choise!='e'){
		
		throw choise;
		}
			
	}


catch(int sum){
	cout<<"EXEPTION:"<<sum<<"is greter then 100 ";
}
catch(char choise){
	cout<<"EXEPTION:"<<choise<<"is not a valid choise ";
 }
}

