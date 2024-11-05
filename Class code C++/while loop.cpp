
/*
//03
#include <iostream>
using namespace std ;
int main(){
	double n1,n2;
	string choise="yes";
	
	while(choise=="yes"){
		cout<<"enter two number : ";
		cin>>n1>>n2;
		cout<<"addition : "<<n1+n2<<endl;
		cout<<"do you want to continue type 'yes' for proced otherwise type any character :" ;
		cin>>choise;
		if(choise=="yes"){
			cout<<"ok u can proceed : ";
			
		}
		else{
			cout<<"thank u for using our service : ";
		}
	}
}



//  15/06/24
// 04 write a program to dertermine wether a number given by user 
//is a armstrong number or not  153  370 371   1634

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
		num=num/10;                                  //#include<c math>
	}                                               //loop-->digit count =>    c= 3   4   5
	                                               //pw(last,c)     pw(base,power)             pw(7,3)  7*7*7
	if(temp==sum){
		cout<<"it is a armstrong number : ";
	}
	else{
		
		cout<<"it is not a armstrong number : ";
	}
}
*/
//indiviual number sum 

#include <iostream>
using namespace std;
int main(){
	int num ,sum=0,last,temp;
	cout<<"Enter test number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
		last=num%10;
		sum=sum+last;
		num=num/10;                                 
	

}
	cout<<sum ;
}



   
