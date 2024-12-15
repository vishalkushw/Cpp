//Write a program that prompts the user to input an integer and 
//then outputs the number with the digits reversed.
//12345----->54321
//671--->176

#include <iostream>
using namespace std;
int main(){
	int num ,sum=0 ,rem;
	cout<<"enter number : ";
	cin>>num;
	
	for(int i=1;i<=num; i++){
		rem=num % 10;
		sum=(sum*10)+rem;
		num = num/10;	
	}
	cout<<sum;
}
