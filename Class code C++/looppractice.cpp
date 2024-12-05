


// 7. 

//8. Write a program to print all odd number between 1 to 100

#include <iostream>
using namespace std;
int main(){

     
	for(int i=1; i<=100; i++){
		
		if(i%2!=0){
		
		cout <<i <<endl;
	}
	}
	
}





//10. Write a program to find sum of all even numbers between 1 to n

#include <iostream>
using namespace std;
int main(){
	int n, num, even=0;
	cout<<"Enter your number : ";
	cin>>n;
     
	for(int i=1; i<=n; i++){
		
		if(i%2==0){
		even=even+i;
      } 
    
	}
     cout<<"sum of all even number 1 to "<<n <<" is : "  <<even;
}


//11. Write a program to find sum of all odd numbers between 1 to n

#include <iostream>
using namespace std;
int main(){
	int n,odd=0;
	cout<<"Enter your number : ";
	cin>>n;
     
	for(int i=1; i<=n; i++){
		
		if(i%2!=0){
		odd=odd+i;
      } 
    
	}
	cout<<"sum of all odd number 1 to "<<n <<" is : "  <<odd;
}




                         //13/06/24
//17. Write a program to calculate HCF of Two given number

#include <iostream>
using namespace std;
int main(){
	int n1,n2 ,small;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	n1>n2? small=n2: small=n1;
	bool HCF=false;
	
	for(int i=small;i>=2;i--){
		if(n1%i==0 && n2%i==0){
			cout<<"HCF " <<i<<endl;
			HCF=true;
			break;
		}
	}
	if(HCF==false)
	cout<<"no HCF possible :";
}



//12. Write a program to find the factorial value of any number

//5!   = 5*4*3*2*1
//fact=1;
//for(int i=num; i>1;i--){
//fact=fact*i
//}

#include <iostream>
using namespace std;
int main(){
	int num,fact=1;
	cout<<"Enter your number : ";
	cin>>num;
	
	for(int i=num; i>=1; i-- ){
		fact=fact*i;   
		
	}
	  cout<<fact;
}

//13. Write a program to find the value of one number raised to the power of another.
  //result=1 base=2  power=5  loop ----> power times   result= result*base

#include <iostream>
using namespace std;
int main(){
	int n1,n2,result=1;
	cout<<"Enter your number : ";
	cin>>n1;
	cout<<"Enter of power : ";
	cin>>n2;
	
	for(int i=1; i<=n2; i++){
		
		result=result*n1;
	}
	cout<<result;
} 

//20. Write a program to find number and sum of all integer between 100 and 200 which are divisible by 9.


#include <iostream>
using namespace std;
int main(){
	int sum=0;
 for( int i=100; i<=200; i++){
 	   if(i%9==0){
 	   	
 	   	cout<<i<<" ";
 	   	
 	   	sum= sum+i;
	}
 	
 }
 cout<<" sum of all divisible number of 9 is : "<<sum;

}

//19. Write a program to enter the numbers till the user wants and at the end the program should display the largest and smallest numbers entered

#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter your number : ";
	cin>>num;
	
	for(int i=1; i<=)
}


/*



14.write a program to reverse the given Digits    (while loop
15. write a program to sum of its Digits
16. write a program to Check Whether a Given Number is Prime or Not


18. Write a program to enter the numbers till the user wants and at the end 
it should display the count of positive, negative and zeros entered
*/

#include <iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"enter number : ";
	cin>>num;
	for(int i=1; i<=num; i++){
		sum=sum+(i*i);
		
	}
	cout <<" sum (1*1)+(2*2)+........+(n*n) : "<<sum;
}

