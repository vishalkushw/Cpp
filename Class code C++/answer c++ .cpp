#include <iostream>
using namespace std;
int main(){
	int  num ,sum=1,rem;
	cout<<"enter number ";
	cin>>num;
	
	while(num>0){
		rem=num%10;
		sum=(sum*rem);
		num=num/10;
		
	}
	cout<<sum;
}

/*
#include <iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"enter number ";
	cin>>n1>>n2;
	
	while(n1==n2){
		if(n1>n2)
		  n1-=n2;
		else{
			n2-=n1;
		}  
	}
	cout<<"hcf is :"<<n1;
}


/*
#include <iostream>
using namespace std;
int main(){
	int num ,fact=1;
	cout<<"enter number : ";
	cin>>num;
	
	for (int i=num; i>=1;i--)
	
	    fact=fact*i;
	    
	    cout<<fact;
	
}
/*
#include <iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"enter number ";
	cin>>n1>>n2;
	
	while(n1!=n2){
		if(n1>n2)
		  n1-=n2;
		else{
			n2-=n1;
		}  
	}
	cout<<"hcf is :"<<n1;
}







#include <iostream>
using namespace std;
int main(){
	int num ,num1=0,num2=1,num3;
	cout<<"enter your range number : ";
	cin>>num;
	cout<<num1<<" "<<num2 <<" ";
	
	for(int i=0;i<=num;i++){
		num3=num1+num2;
		
		if(num3%5!=0){
		
		cout<<num3<<" ";
	}
		num1=num2;
		num2=num3;
	}
	
	
}


// use  continue
/* 
#include <iostream>
using namespace  std;
int main(){
	for(int i=1;i<=100;i++){
		
		if(i%10==0){
			continue;
		}
		cout<<i<<" ";
	}
}


/*
// 10-->WAP to print all palindrome number in given range
#include <iostream>
using namespace std;
int main(){
	int num ,temp,sum=1 ,rem;
	cout<<"Enter number : ";
	cin>>num;
	temp=num;
	
	
	for(int i=1;i<=num;i++){
	
		rem = num%10;
		
		sum = (sum+rem*rem*rem);
		
		num= num/10;
		
		
	}
	if(temp==sum){
		cout<<"armstrong number : "<<sum;
		
	}
	else{
		cout<<"not a armstrong number : "<<sum;
	}
}

/*
//9-->WAP to print all palindrome number in given range
#include <iostream>
using namespace std;
int main(){
	int num ,temp,sum=0 ,rem;
	cout<<"Enter number : ";
	cin>>num;
	temp=num;
	
	
	for(int i=1;i<=num;i++){
	
		rem = num%10;
		
		sum = (sum*10)+rem;
		
		num= num/10;
		
		
	}
	if(temp==sum){
		cout<<"palindrom number : "<<sum;
		
	}
	else{
		cout<<"not a palindrom number : "<<sum;
	}
}

/*
//6-->WAP to print whether a number is palindrom number or not
#include <iostream>
using namespace std;
int main(){
	int num ,temp,sum=0 ,rem;
	cout<<"Enter number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
	
		rem = num%10;
		
		sum = (sum*10)+rem;
		
		num= num/10;
		
		
	}
	if(temp==sum){
		cout<<"palindrom number : "<<sum;
		
	}
	else{
		cout<<"not a palindrom number : "<<sum;
	}
}


/*
//5-->WAP to print all prime number in given range.

#include <iostream>
using namespace std;
int main(){
	int num1 ,num2;
	cout<<"enter your range number :";
	cin>>num1>>num2;
	
	for(int i=num1;i<=num2;i++){
		
		if(i%2==1){
			cout<<"all prime number is : "<<i<<endl;
		}
	}
}


//4-->WAP to print whether a number is prime number or not

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number : ";
	cin>>num;
	
	if(num%2==1){
		cout<<"prime number : "<<num;
	}
	else {
	cout<<"not a prime number : "<<num;
}
}


// 3-->Write a program that prompts the user to input an integer and then outputs the number with the digits reversed.

//12345----->54321
//671--->176

#include <iostream>
using namespace std;
int main(){
	int num ,sum=0 ,rem;
	cout<<"enter number : ";
	cin>>num;
	
	for(int i=1;i<=num; i++){
		rem=num % 10;
		
		sum=(sum*10)+rem;
		
		num = num/10;
		
	}
	cout<<sum;
}
/*
//10 01>WAP to create a pattern
//     *****
//     
//     ***
//      
//     *


#include <iostream >
using namespace std ;
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	
	for(int i=n; i>=1; i--){
		for (int j=1;j<=i; j++){
			cout<<"*";
			
		}
			cout<<endl;
	}

}


/*
//09 Write a program to A school has following rules for grading system: 
//a. Below 25 - F 
//b. 25 to 45 - E 
//c. 45 to 50 - D 
//d. 50 to 60 - C 
//e. 60 to 80 - B 
//f. Above 80 - A 


#include <iostream>
using namespace std;
int main(){\
  int marks;
  cout<<"Enter your marks : ";
  cin>>marks;
  
  if(marks<25){
  	cout<<" F ";
  }
  
  else if(marks>=25 && marks<45){
  	cout<<" E ";
  }
  
  else if(marks>=45 &&marks<50){
  	cout<<" D ";
  }
  
  else if(marks>=50 && marks<60){
  	cout<<" C ";
  }
  
  else if(marks>=60 &&marks<=80){
  	cout<<" B ";
  }
  
  else if(marks>80  && marks<=100 ){
  	cout<<" A ";
  }
  else{
  	cout<<"invalid number ";
  }
}


//08 Write a program to read the value of an integer m and display the message "ok" when m is larger than 0,
//display the message "bye" when m is 0 and display the message "done" when m is less than 0.

#include <iostream>
using namespace std;
int main(){
	int m;
	cout <<"Entrer number : ";
	cin>>m;
	
	if(m>0){
		cout<<" ok ";
	}
	else if (m==0){
		cout<<" bye  ";
	}
	else{
		cout<<" done ";
	}
}

//07  Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
// if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.
 
 

//06  Write a C++ program to find minimum and second minimum between three numbers
#include <iostream>
using namespace std;
int main(){
	int num1 , num2, num3;
	cout<<"Enter first number :  ";
	cin>>num1;
	cout<<"Enter Second  number :  ";
	cin>>num2;
	cout<<"Enter third number :  ";
	cin>>num3;
	

//05  Write a C++ program to find maximum between three numbers
#include <iostream>
using namespace std;
int main(){
	int num1 , num2, num3;
	cout<<"Enter first number :  ";
	cin>>num1;
	cout<<"Enter Second  number :  ";
	cin>>num2;
	cout<<"Enter third number :  ";
	cin>>num3;
	
	
	if(num1>num2 && num1>num3){
		cout<<"num1 is maximum : " <<num1;
	}
	
	else if(num2>num1 && num2>num3){
		cout<<" num2 is maximum : "<<num2 ;
	}
	else {
		cout<<"num3 is maximum : "<<num3;
	}
}


//04 Write a program to Take values of length and breadth of a rectangle from user ,alsoTake value of side of a square from user ,and check which area is greater.
 #include <iostream>
  using namespace std;
  int main(){
	
	int length , breadth;
	cout<<"Enter your length : ";
	cin>>length;
	cout<<"Enter your breadth : ";
	cin>>breadth;
	
	if(length>breadth){
		cout<<"Length is bigger than breadth : "<<length; 
	}
	
	else if (length<breadth) {
		cout<<"Breadth is bigger than length : "<<breadth;
	}
	else{
		cout<<"Length and breadth are same : " <<length;
	}
}




//03  Write a program to Take values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>
using namespace std;
int main(){
	
	int length , breadth;
	cout<<"Enter your length : ";
	cin>>length;
	cout<<"Enter your breadth : ";
	cin>>breadth;
	
	if(length==breadth){
		cout<<"It is a square : "; 
	}
	else{
		cout<<"It is not a square";
	}
}





//1 Write a program to take two number from user and check who is max.

#include <iostream >
using namespace std;
int  main(){
	int num1 ,num2;
	cout<<"Enter  first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
   if (num1>=num2){
		cout<<"Num1 is max : "<<num1 ;
  }
	
	else{
		cout<<"Num2 is max : "<<num2;
	}
}

*/


//

