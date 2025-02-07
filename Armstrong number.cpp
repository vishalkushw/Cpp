#include <iostream>
using namespace std;
int main(){
	int num,rem,temp,sum=0;
	cout<<"Enter number : ";
	cin>>num;
	
	temp=num;
	
	while(num>0){
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
		
	}
	if(sum==temp){
		cout<<"It is a armstrong number :"<<sum;
	}
	else{
		cout<<"It is not a armstrong number";
	}
}
