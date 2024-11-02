// call by value
/*
#include <iostream>
using namespace std;
void increment_10(int n){
	n=n+10;
}

int main(){
	int number = 12;
	increment_10(number);
	cout<<number<<endl;
}
*/

// call by refrence
/*
#include <iostream>
using namespace std;
void increment_10(int *n){
	*n=*n+10;
}

int main(){
	int number = 12;
	increment_10(&number);
	cout<<number<<endl;
}
*/
// call by refrence
/*
#include <iostream>
using namespace std;
void increment_10(int &n){
	n=n+10;
}

int main(){
	int number = 12;
	increment_10(number);
	cout<<number<<endl;
}
*/

// write aprogram to demostrate by call by vale and call by refrence 
// by creating  to functin great_zero  parameter 3 int  return void find 
// greatet number and  asigne zero  and print main 

/*
#include <iostream>
using namespace std;
void great_zero(int &n1,int &n2,int &n3){
	if (n1>n2){
		if(n1>n3){
		 n1=0;
		}
		else{
		n3=0;	
		}
	}
	
	if(n2>n1){
		if(n2>n3){
		n2=0;	
		}
	else{
		n3=0;
	}	
	}
}



int main(){
	int number1,number2,number3;
	 cout<<"enter three number :";
	 cin>>number1>>number2>>number3;
	great_zero(number1,number2,number3);
	cout<<number1<<" "<<number2<<" "<<number3;
}
*/

