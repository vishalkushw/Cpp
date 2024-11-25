/*
#include <iostream>
using namespace std;
//global space ,global variable,class,structure...

 void add(int num1,int num2,int num3){   //formal parameter
	cout<<"control goes to add()\n";
	cout<<"addition:"<<num1+num2+num3<<endl;
}
int main(){
	int number1,number2,number3;
	cout<<"Enter three number :";
	cin>>number1>>number2>>number3;
	add(number1,number2,number3);//actual parameter
	cout<<"control back to main";
	
}
*/
/*
#include <iostream>
using namespace std;
//global space ,global variable,class,structure...
void add(int,int,int );  //prototype signature decleration
 
int main(){
	int number1,number2,number3;
	cout<<"Enter three number :";
	cin>>number1>>number2>>number3;
	add(number1,number2,number3);//actual parameter
	cout<<"control back to main";
	
}


void add(int num1,int num2,int num3){   //formal parameter
	cout<<"control goes to add()\n";
	cout<<"addition:"<<num1+num2+num3<<endl;
}

*/


#include <iostream>
using namespace std;
//global space ,global variable,class,structure...

 int add(int num1,int num2,int num3){   //formal parameter
	return num1+num2+num3;
}
int main(){
	int number1,number2,number3;
	cout<<"Enter three number :";
	cin>>number1>>number2>>number3;
  int result =	add(number1,number2,number3);//actual parameter
    cout<<"Result : "<<result;
	
}







/*
#include <iostream>
using namespace std;

int add(int a ,int b){
    return a+b;
}

int sub(int a,int b){
	return a-b;
}
int main(){
	int num1,num2;
	cout<<"enter two number : ";
	cin>>num1>>num2;
	
	cout<<"Addition is :"<<add(num1,num2)<<endl;
	cout<<"subtractio is :"<<sub(num1,num2);
}
*/
