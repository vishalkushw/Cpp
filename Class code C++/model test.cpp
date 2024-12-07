/*
CPP 1st Module  Test                            set-A                                                                              MM-40
Write a program that calculates whether a transaction is a profit or loss and by how much, based on the cost price and selling price:
If selling price is greater than cost price, print the profit amount
If selling price is less than cost price, print the loss amount
If selling price is equal to cost price, print "No profit, no loss"


#include <iostream>
using namespace std;
int main(){
	int cost ,profit,lose,
	
	cout <<"enter your cost ";
	cin>>cost;
	
	if(cost>)
}





//WAP to determine whether a number given by a user, is a prime number or not,
#include <iostream>
using namespace std;
int main(){
	int num ;
	bool flag=0;
	cout<<"enter number : ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		
		if(num%2==0 ){
			cout<<"not a prime ";
			flag=1;
			break;
			
			
		}

	}	
	
	if(flag==0){
		cout<<" prime ";
	}
	}
*/
#include <iostream>
using namespace std ;
int main(){
	int num;
	cout<<"enter number ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
	
	
	
	if(i%2==1){
		cout<<i<<" ";
	}
	else{
		cout<<" ";
	}
}
}


/*
WAP to determine whether a number given by a user, contain digit 7 or not.
N=234          Answer : no
N=65676     Answer:yes


#include <iostream>
using namespace std;
int main(){
	int num,rem,sum=0;
	cout<<"enter number : ";
	cin>>num;
	
	while(num>0){
		
		rem=num%10;
//		sum=(sum*10)+rem;
		num=num/10;
	}
	if(rem==7){
		cout<<"yes" <<rem;
	}
	else{
		cout<<"no"<<rem;
	}
}

/*
WAP to demonstrate the use of break and continue statement using appropriate program.
Also write their difference.

WAP to demonstrate use of switch statement if user enter
 ‘E’ display all even number upto 100.
‘O’ display all odd number upto 100.

CPP 1st Module  Test                              set-B                                                                 MM-40                                                                                              
Write a program that calculates the discount based on the purchase amount using the following criteria:
Purchase amount up to 100: No discount
Purchase amount from 101 to 500: 5% discount
Purchase amount from 501 to 1000: 10% discount
Purchase amount above 1000: 15% discount

#include <iostream>
using namespace std;
int main(){
	int amount,dis;
	cout<<"enter your amount : ";
	cin>>amount;
	
	if(amount<=100){
		cout<<"no discount  ";
	}
	
	else if (amount>=100 && amount<=500){
		dis = amount*(5.0/100);
		{
			cout<<"discoutn is 5% : "<<dis<<endl;
			cout<<"you pay only : "<<amount-dis;
		}
		
}
	else if (amount>=501 && amount<=1000){
		dis = amount*(10.0/100);
		{
			cout<<"discoutn is 10% : "<<dis<<endl;
			cout<<"you pay only :  "<<amount-dis;
		}	
}
	else if (amount>100 ){
		dis = amount*(15.0/100);
		{
			cout<<"discoutn is 15% : "<<dis<<endl;
			cout<<" you pay only : "<<amount-dis;
		}
				
	}
}






WAP to display Fibonacci series up to n terms , but ignore all terms which is a multiple of 5, Example:
N=10
0 1 1 2 3 8 13 21 34 (5 is ignored)
N=12
0 1 1 2 3 8 13 21 34 89 (5 and 55 are ignored)

#include <iostream>
using namespace std;
int main(){
	int num, num1=0, num2=1, num3;
	cout<<"enter your range : ";
	cin>>num;
	
	cout<<num1<<" "<<num2<<" ";
	
	for(int i=1;i<=num-2; i++){
		num3=num1+num2;
		
		if(num3%5!=0)
		
		cout<<num3 <<" ";
	
		num1=num2;
	    num2=num3;
	}
	
	
}





//WAP to determine whether a number given by a user, is a palindrome number or not.
#include <iostream>
using namespace std;
int main(){
	int num,temp,rem,sum=0;
	cout<<"enter your number : ";
	cin>>num;
	temp=num;
	
	while(num>0){
		rem=num%10;
		
		sum=(sum*10)+rem;
		
		num=num/10;
		
	}
	if(temp==sum){
		cout<<"palindrom number : "<<sum;
	}
	else{
		cout<<"not a palindrom number : "<<sum;
	}
	
}



// WAP to demonstrate the use of break and continue statement using appropriate program.Also write their difference.
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number : ";
	cin>>num;
	
	for (int i=1;i<=num;i++){
		
		if(i==10)
			
//		   break;
		   
		   continue;
		cout<<i<<" ";
		
		
	}
}



 // WAP to demonstrate use of switch statement if user enter ‘I’ start an infinite loop.‘F’ display all number from 300  to 400 .(both number included)
#include <iostream>
using namespace std;
int main(){
	char choise;
	int i=1;
	cout<<"enter your choise I for infinite and F for display number ";
	cin>>choise;
	
	switch(choise){
		
		case 'I' : 
		          while(i>0)
				  
		          cout<<"Infinite loop : "<<i;
		           break;
		       
		case 'F' : 
		        for(int i=300; i<=400;i++)
		        	cout<<i<<" ";
		        	break;
				
				
		default :
		        cout<<"invalid choise  ";         
	}
}
*/
