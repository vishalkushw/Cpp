/*write a c++ program to accept  two integers and check whether they are eqal or not
#include <iostream>
using namespace std;
int main(){
	
	int a;
	int b;
	cout<<"Enter First number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	a==b ? cout<<"Both number are equal" : cout<<"Both number are not equal";    //ternary oprater
	
}



//write a c++ progam to chek whether a number is 3 digit or not
#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter your number : ";
	cin>>number;
	number>=100 && number<=999 ? cout<<"Number is three digit":cout<<"Number is not three digit ";
	
}

//write a c++ progam to chek whether a number is positive or negative
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter you number : ";
	cin>>n;
	n>=0  ? cout<<"number is positive":cout<<"number is negative";
}

*/

#include <iostream>
using namespace std ;
int main(){
	int  age;
	cout<<"Enter your age : ";
	cin>>age;
	age>=18 ? cout<<"you are elagible for vote":cout<<"You are not elagible for vote";
	
}



