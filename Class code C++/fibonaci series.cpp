#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num,rem,sum=0,temp;
	cout<<"enter number : ";
	cin>>num;
	
	temp=num;
	
	 while(num>0)
	 {
		
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
		
	}
	if(temp==sum){
		cout<<"armstrong number : "<<sum;
	}
	else{
		cout<<"not a armstrong number : "<<sum;
	}
}
/*
#include <iostream>
using namespace std;
int main(){
	int num,rem,sum=0,temp;
	cout<<"enter number : ";
	cin>>num;
	
	temp=num;
	
	 while(num>0)
	 {
		
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
		
	}
	if(temp==sum){
		cout<<"armstrong number : "<<sum;
	}
	else{
		cout<<"not a armstrong number : "<<sum;
	}
}
/*

/*
//02  


#include  <iostream>
using namespace std;
int main(){
	int num ,tem, sum=0 ,rem;
	cout<<"enter number : ";
	cin>>num;
	
	tem=num;
	
	

	while(num>0)
	{
		rem = num%10;
		
		sum=(sum*10)+rem;
		
		num=num/10;
		
		
	}
	
	if(tem==sum){
		cout<<"palindrom number "<<sum;
	}
	else{
		cout<<"not a palindrom number : "<<sum;
	}
	
}


*/

