//4-->WAP to print whether a number is prime number or not

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number : ";
	cin>>num;
	
	if(num%2==1){
		cout<<"prime number : "<<num;
	}
	else {
	cout<<"not a prime number : "<<num;
}
}

