//  write a program to  finde the sum of first and last digit of a number    6  7  9 5  
/*
#include <iostream>
using namespace std;
int main(){
	int num ,count=0,last;
	cout<<"enter number : ";
	cin>>num;
	
	while(num>0){
		
		last=num%10;
		
		num=num/10;
		
		count++;
	}
	
	cout<<count;
}
*/

#include <iostream>
using namespace std;
int main(){
	int num ,last;
	cout<<"enter number : ";
	cin>>num;
	
	while(num>0){
		
		last=num%10;
		
		num=num/10;
		
		num++;
		num++;
		
		
	 if(last==9){
	   	cout<<"yes";
	   	break;
	   }
	
	   
	   else{
	   	cout<<"no";
	   	break;
	   }
	}
	
		
	}






