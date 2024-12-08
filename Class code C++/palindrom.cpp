// WAP to print whether a number is palindrom number or not?

#include <iostream>
using namespace std;
int main(){
	int num ,temp,sum=0 ,rem;
	cout<<"Enter number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
		rem = num%10;
		sum = (sum*10)+rem;
		num= num/10;	
	}
	if(temp==sum){
		cout<<"palindrom number : "<<sum;	
	}
	
	else{
		cout<<"not a palindrom number : "<<sum;
	}
}
