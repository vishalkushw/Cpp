//1> WAP to create a function namedaverage that is created to find out the
//   average of 5 numbers 
//   parameter -->5 number
//   return --->string (a message success)
/*
#include<iostream>
using namespace std;
int average(int num1,int num2,int num3,int num4,int num5){
             
        return (num1+num2+num3+num4+num5)/5;
}
int main(){
	int number1,number2,number3,number4,number5;
	
	cout<<"Enter five number : ";
	cin>>number1>>number2>>number3>>number4>>number5;
	
  int result =average(number1,number2,number3,number4,number5);
  cout<<result<<" success "<<endl;
	
}
*/
//2>-->Write a program to find the factorial of any number entered by 
//user parameter -->int
//return --->int (or long long in case of higher number) i,e result

/*
#include<iostream>
using namespace std;
	long long fact(int num){
	int fac=1;
	   for(int i=num;i>=1;i--){
	   	    fac=fac*i;   
	   }
       return fac;
}

int main(){
	int number;
	cout<<"Enter positive number : ";
	cin>>number;
		
  long long result =fact(number);
  cout<<"factorial is : "<<result<<endl;
	
}

*/
//3-->Write a program that prompts the user to input an integer and then 
//outputs the number with the digits reversed.
//parameter -->int
//return --->int 
/*
#include<iostream>
using namespace std;
	int revers(int num){
	int rem,sum=0;
	   while(num>0){
	   	   rem=num%10;
			sum=(sum*10)+rem;
			num=num/10;  
	   }
       return sum;
}
int main(){
	int number;
	cout<<"Enter number : ";
	cin>>number;		
  int result =revers(number);
  cout<<"revers is : "<<result<<endl;	
}

*/
//4->WAP to print whether a number is armstrong number or not
//parameter -->int
//return --->string (a message "yes" or "no")
/*
 #include <iostream>
 using namespace std;
 string armstrong(int num){
 	int rem,sum=0,temp;
 	temp=num;
 	while(num>0){
 		rem=num%10;
 		sum=sum + rem*rem*rem;
 		num=num/ 10;	
	 }
	    if(temp==sum){
	    return  "Armstrong number : " "yes";
		}	
	else{
		return "Armstrong number :""no";
		}		
}
 int main(){
 	int num;
 	cout<<"Enter number : ";
 	cin>>num;
 	string result=armstrong(num);
 	cout<<result;
 
 }
*/

//5->WAP to print whether a number is palindrome number or not
//parameter -->int
//return --->string (a message "yes" or "no")

/*
#include<iostream>
using namespace std;

string palindrom(int num){
	int temp,sum=0,last;
	temp=num;
	while(num>0){
		last=num%10;
		sum=sum*10+last;
		num=num/10;
	}
      if(temp==sum){
      	return "yes";
	  }
	  else{
	  	return "no";
	  }
    
}
int main(){
	int number;
	cout<<"Enter number : ";
	cin>>number;
	
  string result =palindrom(number);
  cout<<result<<endl;
	
}
*/

//          having parameter  no return
//         =============================
//1>WAP to concatenate name and surname of a user having one space
//between them
//parameter -->name,surname
//return --->no return 

/*
#include<iostream>
using namespace std;
	void concat(string name ,string surname){
      cout<<name+" "+surname;
        return;
}

int main(){
	string name,surname;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter surname : ";
	cin>>surname;
    concat(name,surname);
  
}
*/
//2-->Write a program that ask the user to input a positive integer. 
//It should then print the multiplication table of that number.
//parameter -->int
//return --->no return 


/*
#include<iostream>
using namespace std;
    void table(int number){
      for(int i=1;i<=10;i++){
      	cout<<number<<"*"<<i<<"="<<i*number<<endl;	  	
	  }
        return;
}

int main(){
	int number;
	cout<<"Enter number : ";
	cin>>number;
    table(number);
  
}
*/
//3-->Write a program that ask the user two input . 
//print the multiplication table of that range of numbers(nesting)
//parameter -->int,int(range)
//return --->no return


/*
#include<iostream>
using namespace std;
    void table(int num1,int num2){
    for(int i=num1;i<=num2;i++){	
      for(int j=1;j<=10;j++){
        cout<<i<<"*"<<i<<"="<<i*j<<endl;	  	
	  }
	  cout<<endl;
  }
        return;
}

int main(){
	int number1,number2;
	cout<<"Enter number : ";
	cin>>number1>>number2;
    table(number1,number2);
  
}

*/
//5-->WAP to print all armstrong number in given range.
//parameter -->int,int(range)
//return --->no return
/*
#include <iostream>
 using namespace std;
 
 void armstrong(int num1,int num2){
 	int rem,sum=0,temp;
 	temp=num1;
 	for(int i=num1;i<=num2;i++){
 		int num=i;
 		while(num>0){
 		rem=num%10;
 		sum=sum + rem*rem*rem;
 		num=num/ 10;
 }
 if(num==sum){
	    cout<<sum<<" ";
	    return;
		}	
	 }
	 
	    
		
}
 int main(){
 	int num1,num2;
 	cout<<"Enter your rang number : ";
 	cin>>num1>>num2;
	armstrong(num1,num2);
 }
 */
//          no parameter no return
//          ======================
//1>WAP to find the area of rectangle taking all essential input in 
// function itself
//parameter -->no
//return --->no
/*
#include <iostream>
using namespace std;
 void rectangle(){
  int length,breath ,area;
	cout<<"enter length : ";
	cin>>length;
	cout<<"enter breath : ";
	cin>>breath;
	
	area=length*breath;
	cout<<"Area of rectangle is : "<<area;
	   
	 return;
}	
 int main(){
	rectangle();
}

*/
//2>Two numbers are entered through the keyboard. Write a program to find
//the value of one number raised to the power of another. 
//parameter -->no
//return --->no
/*
#include <iostream>
#include <cmath>
using namespace std;
void power(){
	int num1,num2,result;
	cout<<"Enter num1 :";
	cin>>num1;
	cout<<"Enter num2 :";
	cin>>num2;
	
	result=pow(num1,num2);
	cout<<result;
}
int main(){
	power();
}
*/

//3>Write a program to print Fibonacci series of n terms where n is 
//input by user :
//0 1 1 2 3 5 8 13 24 ..... 
//parameter -->no
//return --->no


/*
#include <iostream>
using namespace std;
 void fibonacci(){
  int num ,num1=0,num2=1,num3;
	cout<<"enter number: ";
	cin>>num;
	cout<<num1<<" "<<num2<<" ";
	for(int i=3;i<=num;i++){
		num3=num1+num2;
		cout<<num3<<" ";
		num1=num2;
		num2=num3;
	}	
	 return;
}	
 int main(){
	fibonacci();
}
*/	
        // no parameter having return
        // ===========================
//1>WAP to find the area of square taking all essential input in function
//itself,and return result.(main print)
//parameter -->no
//return --->return int
/*
#include <iostream>
using namespace std;
 int rectangle(){
  int length,breath ,area;
	cout<<"enter length : ";
	cin>>length;
	cout<<"enter breath : ";
	cin>>breath;
	
	area=length*breath;
     return area;
}	
 int main(){
 int result=rectangle();
 cout<<"area of squre is :"<<result;
}
*/
//2-->WAP to print whether a number is prime number or not.
//parameter -->no
//return --->return string ("yes" or "no")
#include <iostream>
using namespace std;
int main(){
	int num ,count=0;
	cout<<"enter number : ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		if(i%2==0){
		count++;
	 }
}
    if(count==2){
    	cout<<" not a prime number : "<<num;
	}
	else{
		cout<<"prime number : "<<num;
	}
}


