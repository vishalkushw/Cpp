// 04 write a program to dertermine wether a number
// given by user is a armstrong number or not  153  370 371  

#include <iostream>
using namespace std;
int main(){
	int num ,sum=0,last,temp;
	cout<<"Enter test number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
		last=num%10;
		sum=sum+last*last*last;
		num=num/10;                                 
	}                                             
	    
	if(temp==sum){
		cout<<"it is a armstrong number : ";
	}
	
	else{
		cout<<"it is not a armstrong number : ";
	}
}
