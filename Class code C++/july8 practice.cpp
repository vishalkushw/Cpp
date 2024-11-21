//A company decided to give bonus of 5% to employee if his/her year of service is more
// than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

#include <iostream>
using namespace std;
int main(){
	int  year ,amount ,bonus;
	cout<<"enter your sallery amount aand year of service : ";
	cin>>amount>>year;
	
	
	if(year>5){
		
		bonus = amount*(5.0/100);
		
		cout<<"your bonus is "<<bonus<<endl;
		cout<<"total salary is " <<amount+bonus;
	}
	else {
		cout<<" no bonus "<<amount;
	}
}




/*
#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter year : ";
	cin>>year;
	
	if(year%400==0 && year%100!=0 && year%4==0){
		
		cout<<"its leap year "<<year;
		
	}
	
	else {
		cout<<"not a leap year "<<year;
	}
	
}




#include <iostream>
using namespace std ;
int main(){
	float temp;
	cout<<"enter  number : ";
	cin>>temp;
	
	if(temp < 0){
		cout<<"freezing weather :" <<temp;
		
	}
	    else if(temp>= 0 && temp<10){
		cout<<"very cold weather :" <<temp;
		
	}
		else if(temp>=10 && temp<20){
		cout<<" cold weather :" <<temp;
		
	}
		else if(temp>=20 && temp<30){
		cout<<"normal in temp :" <<temp;
		
	}
		else if(temp>=30 && temp<40){
		cout<<"its hots :" <<temp;
		
	}
		else if(temp>=40){
		cout<<"very hot :" <<temp;
		
	}
	else{
		cout<<"incorect input ";
	}
}



#include <iostream>
using namespace std;
int main(){
	int num;
	char gender;
	
	cout<<"ente your age: ";
	
	cin>>num;
	
    cout<<"ente your grnder male for 'm' female for 'f': ";
	
	cin>>gender;

	
	if(num>=18 && gender=='f'){
		cout<<"eligible for marriage : "<<num;
	}
	
	 else if (num>=21 && gender=='m'){
	
	
	cout<<" not eligible for marriage : ";
    }
  else{
  	cout<<"you are not eligible for marriage ";
  }
}



//02
#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter two number : ";
	cin>>num1>>num2;
	
	if(num1>=num2){
		cout<<"num1 is max : "<<num1;
	}
	else{
		cout<<"num2 is max : ";
	}
}




//1
#include <iostream>
using namespace std;
int main(){
	int num ;
	cout <<"enter number :";
	cin>>num;
	
	for(int i=0; i<=num;i++){
		cout<<i;
		cout<<endl;
	}
	

}
*/
