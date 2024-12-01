/*
//01

#include <iostream>
using namespace std;
int main(){
	int num1,num2, sum;
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	
	sum=num1+num2;
	cout<<sum;
}


//02   

#include <iostream>
using  namespace std;

int main()
{
int a,b;
cout <<"Enter first number : ";
cin>>a;
cout<<"Enter second number : "  ;
cin>>b;

cout<< "Addition is : " <<a+b <<endl;
cout<< "Subtraction is : "<<a-b <<endl;
cout<<"Multification is : "<<a*b <<endl;
cout<< "Divided is : "<<a/b <<endl;
cout<<"Modulas is : "<<a%b <<endl;


}


//03  bitwise oprater
#include <iostream>
using namespace std;
int main(){
	
	int a=25;
	int b=2;
//	cout<<(a<<b);  //rigth sift oprater double by number  
	cout<<(a>>2);  // left shift oprater half by number
}


//04  enter two number and cheak who is max 
#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	if(num1>num2){
		cout<<"Num1 is max : " <<num1;
		
	}
	else{
		cout<<"Num2 is max : "<<num2;
	}
}


// 05 write a program to take values of length and breadth of a recttangle from user  and chek if it square or not.
#include <iostream>
using namespace std;
int main(){

double length;
double breadth;
cout<<"Enter your length : ";
cin>>length;
cout<<"Enter your breadth : ";
cin>>breadth;

if(length==breadth){
	cout<<"It is square ";
	
}
else{
	cout<<" It is not a square ";
}


}


//06 write a program to take values of length and breadth of a recttangle from user also  take value of side of a square from user and cheack which area is greater.

#include <iostream>
using namespace std;
int main(){
	double length;
	double breadth;
	cout<<"Enter your length : ";
	cin>>length;
	cout<<"Enter your breadth : ";
	cin >>breadth;
	
	if(length==breadth){
		cout<<"length and breadth are same : ";
		
	}
	else if(length>breadth){
		cout<<"length is greater : ";
	}
	
	else if(length<breadth){
		cout<<"breadth is greater : ";
		
	}
	else{
		cout<<"length and breadth are not same";
	}
}

//07 write a c++ program to find maximum  between three number.

#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter Second number : ";
	cin>>num2;
	cout<<"Enter Third number : ";
	cin>>num3;
	
	if(num1>num2){
		if(num1>num3){
			cout<<"Num1 is bigger : "<<num1;
		}
		else{
			cout<<"Num3 is bigger : "<<num3;
		}
		
	}
		else{
			cout<<"Num2 is bigger : "<<num2;
		
	}
}


//08 write a program to input age of male or female and cheak he/she is eligible for marriage or not  ask age and gender.

#include <iostream>
using namespace std;

int main(){
	
	int age;
	char gender ,m,f;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Enter your gender male 'm' and female 'f' : ";
	cin>>gender;
	if(age>=21 && gender == 'm'){
		cout<<"you are eligible for marriage : ";
		
	}
	else if (age>=18 && gender == 'f'){
		cout<<"you are eligible for marriage : ";
		
	}
	else{
		cout<<"you are note eligible for marriage :  ";
	}
	
}


//09 
#include <iostream>
using namespace std;
int main(){
	int unit;
	cout<<"Enter your water consumption : ";
	cin>>unit;
	
	if(unit>45 && unit<=75){
		cout<<"you have to pay: 475 rs " ;
	}
	 else if (unit>75 && unit<=125){
		cout<<"you have to pay : 750 rs " ;
	}
	 else if (unit>125 && unit<=200){
		cout<<"you have to pay : 1225 rs " ;
	}
	else if (unit>200 && unit<=350){
		cout<<"you have to pay : 1650 rs " ;
	}
	else if(unit>350){
	
		cout<<"you have to pay : 2000";
    }
	else {
		cout<<"you have dont pay anything ";
	}
}

//10
#include <iostream>
using namespace std ;
int main(){
	int cost;
	cout<<"enter your cost price : ";
	cin>>cost;
	double dis;
	
	if(cost<2000){
		dis=cost*(5.0/100);
		cout<<"discount"<<dis<<endl;
		cout<<"pay : "<<cost-dis<<endl;
	}
	else if(cost>2001 && cost<=5000){
		dis=cost*(25.0/100);
		cout<<"discount"<<dis<<endl;
		cout<<"pay : "<<cost-dis<<endl;
	}
	
	else if(cost>5001 && cost<10000){
		dis=cost*(35.0/100);
		cout<<"discount"<<dis<<endl;
		cout<<"pay : "<<cost-dis<<endl;
	}
	
	else if(cost>10000){
		dis=cost*(50.0/100);
		cout<<"discount"<<dis<<endl;
		cout<<"pay : "<<cost-dis<<endl;
	}
	
}


//11  comparsion two number
#include <iostream>
using namespace std;
int main (){
	
	int a = 12;
	int b = 34;	
//	cout<<(a<b)<<endl; //a is lessthan b		
//	cout<<(a==b)<<endl; //a is not eqal b
	
	cout <<!(a>=b);    
	
	
}

//12   Enter your age and chek you are eligible for vote or note

#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age : ";
	cin>>age;
	
	age>=18 ? cout<<"you are eligible for vote : " : cout<<"you are not eligible for vote";
}



//13  Write a program  inter agr and  cheak you are eligible for marriage or not 

#include <iostream>
using namespace std;
int main(){
	char gender;
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<"Are you male 'm' or female 'f' : " ;
	cin>>gender;
	age>=21 && gender=='m'|| age>=18 && gender== 'f'? cout<<"you are eligible for marriage":cout<<"you are not eligible for marriage";
	
	
	
}


//14
	#include <iostream>
		using namespace std;
		int main(){
			int amount, note;
			cout<<"Enter your amount ";
			cin>>amount;
			if(amount/2000>=1){
				note=amount/2000;
				cout<<"2000 : "<<note<<endl;
				amount=amount-2000*note;
			}
			
				if(amount/500>=1){
				note=amount/500;
				cout<<"500 : "<<note<<endl;
				amount=amount-500*note;
			}
			
				if(amount/200>=1){
				note=amount/200;
				cout<<"200 : "<<note<<endl;
				amount=amount-200*note;
			}
				if(amount/100>=1){
				note=amount/100;
				cout<<"100 : "<<note<<endl;
				amount=amount-100*note;
			}
				if(amount/50>=1){
				note=amount/50;
				cout<<"50 : "<<note<<endl;
				amount=amount-50*note;
			}
				if(amount/20>=1){
				note=amount/20;
				cout<<"20 : "<<note<<endl;
				amount=amount-20*note;
			}
				if(amount/10>=1){
				note=amount/10;
				cout<<"10 : "<<note<<endl;
				amount=amount-10*note;
			}
				if(amount/5>=1){
				note=amount/5;
				cout<<"5 : "<<note<<endl;
				amount=amount-5*note;
			}
				if(amount/2>=1){
				note=amount/2;
				cout<<"2 : "<<note<<endl;
				amount=amount-2*note;
			}
				if(amount/1>=1){
				note=amount/1;
				cout<<"1 : "<<note<<endl;
				amount=amount-1*note;
			}
		}



//15
#include<iostream>
		using namespace std;
		int main(){
			int amount,dis;
			cout<<"Enter your amount : ";
			cin>>amount;
			
			if(amount>=1000){
				dis=amount*(20.0/100);
				cout<<"dicount is 20%: "<<dis<<endl;
				cout<<"you pay :"<<amount-dis;
				
				
			}
			else if(amount>=500||amount<1000){
				dis=amount*(10.0/100);
				cout<<"dicount is  10%: "<<dis<<endl;
				cout<<"you pay :"<<amount-dis;
	        	}
	        else if (amount<500){
				
	        	dis=amount*(2.0/100);
				cout<<" No dicount : "<<endl;
				cout<<"you pay :"<<amount;
		}
		}
	        


//16
#include <iostream>
using namespace std;
int main(){
	double amount,dis ;
	cout <<"enter your purchase amount : ";
	cin>>amount;
	
	if (amount<=100){
	
	   dis=amount*(0.0/100);
	   cout<<"discount is : "<<dis<<endl;
	   cout<<amount-dis;
     }
     
    else if (amount>=101 || amount<=500){
	
	   dis = amount*(5.0/100);
	   cout<<"discount is : "<<dis<<endl;
	   cout<<amount-dis;
     }
     
    else if (amount>=501 || amount<=1000){
	
	   dis = amount*(10.0/100);
	   cout<<"discount is"<<dis<<endl;
	   cout<<amount-dis;
     }
     
     else if (amount>1000){
	
	   dis =amount*(15.0/100);
	   cout<<"discount is"<<dis<<endl;
	   cout<<amount-dis;
     }
}

//17
#include <iostream>
using namespace std ;
int main(){
	char num;
	cout<<"enter your character'i' for infinite 'f' for display number ";
	cin>>num;
	
	switch(num){
		 
		 case 'i' :
		 	cout<<"infinite loop";
		 	break;
		 	
		 case 'f' :
		 	for(int i=300;i<=400;i++){
		 		cout<<i<<" ";
			 }
		    	
	}
	
}
*/

//18
#include <iostream>
using namespace std;
int main(){
	int a ,b,c;
	cout<<"enter three number : ";     // 32  22   21
	cin>>a>>b >>c;
		cout<<(a>b && b>c)<<endl;   //  && use of and oprater  both condition are ture    1
	   
	   cout<< (a>b || b>c)<<endl;        // || use of or oprater one condition are true   1
	   
	   cout<< !(a>b);                                                    //                 0
} 
