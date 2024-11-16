// 1 Write a program to A school has following rules for grading system:

//a. Below 25-F

//b. 25 to 45-E

//c. 45 to 50-D

//d. 50 to 60 - C

//e. 60 to 80-B

//f. Above 80-A

//Ask user to enter marks and print the corresponding grade.
/*
#include <iostream>
using namespace std;
int main(){
	
	int mark;
	cout <<"Enter your mark : ";
	cin>>mark;
	if (mark<25){
		cout<<" F ";
		
	}
	else if(mark>=25 && mark<45){
	     cout<<"E";
	}
	else if(mark>=45 && mark<50){
	     cout<<"D";
	}
	else if(mark>=50 && mark<60){
	     cout<<"C";
	}
	else if(mark>=60 && mark<80){
	     cout<<"B";
	}
	else if(mark>=80 && mark<=100 ){
	     cout<<"A";
	}
	else{
		cout<<"please enter valid mark : ";
	}
}


//2write  a program  that accepts a number from user and calculate whether it is positive or negative or zero.

#include <iostream>
using namespace std;
int main(){
	int number ;
	cout<<"Enter number : ";
	cin>>number;
	
	if(number>0){
		cout<<"Number is positive : " <<number;
			
	}
	
	else if(number<0){
		cout<<"Number is negative : " <<number;
		
	}
	else{
		cout<<"number is zero : " <<number;
	}
}


//3   write a c++ program to find maximum  between three number.
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter 3 number : ";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<a<<" is greatest";
	}
	 else if(b>a && b>c){
		cout<<b<<" is greatest";
	}
	else{
		cout<<c<<" is greatest";
		
	}
}



#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter 3 number : ";
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<a<<" is greatest : ";
		if(b>c){
				cout<<b<<" is second  greatest";
         	}
	     else{
		    cout<<c<<" is  second greatest : ";
			
		}
	}
	 else if(b>a && b>c){
		cout<<b<<" is greatest : ";
		if(a>c){
				cout<<a<<" is second  greatest : ";
         	}
	     else{
		    cout<<c<<" is  second greatest : ";
			
		}
		
		
	}
	else{
		cout<<c<<" is  greatest : ";
			if(a>b){
				cout<<a<<" is second  greatest : ";
         	}
	     else{
		    cout<<b<<" is  second greatest : ";
			
		}
		
		
	}
}

// leap year or not

#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter of your year : ";
	
	cin>>year;
	if (year%400==0 || year%4==0 && year%100!=0){
		cout<<"It is leap year : ";
	}
	
	else{
		cout<<"it in not a leap year : ";
	}
	
}



#include <iostream>
using namespace std;
int main(){
	char character;
	cout<<"Enter your character : ";
	cin>>character;
	
	if( character>='A' && character<='Z'){
		cout<<"Upper case character : " <<character;
		
	}
	else{
		cout<<"lowercase character : "<<character;
	}
}
//





//Write a  program to determine eligibility for admission to a professional course based on the following criteria:
//Marks in Maths >=65
//Marks in Phy >=55
//Marks in Chem>=50
//Total in all three subject >=190

#include <iostream>
using namespace std;
int main(){
	int phy,chem,math;
	cout<<"Enter your physis mark : ";
     	cin>>phy;
	cout<<"Enter your chemistry mark : ";
	    cin>>chem;
	cout<<"Enter your math mark : ";
    	cin>>math;
    	
    	int total=phy+ chem+ math;
    	
    	if(phy>=55 && chem>=50 && math >=65 && total>=190){
    		cout<<"Eligible for admission : ";
		}
		
		else{
			cout<<"you are not eligible for admision : ";
		}
	
	
	
	
}
//Write a  program to input a cost of a pen and calculate 70 pens cost with some discount
//.if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%


#include <iostream>
using namespace std;
int main(){
	
	int cost,discount,total;
	cout<<"Enter your pen cost : ";
	cin>>cost;
	
	total= cost *70;
	
	if (total>1000){
	
	discount=total*(20.0/100);
	total= total-discount;
	cout<<"your discount is  20%: "<<discount<<endl;
	cout<<"you have pay only : "<<total;
}
    else{
	
	
	discount=total*(10.0/100);
	total= total-discount;
	cout<<"your discount is 10% : "<<discount<<endl;
	cout<<"you have pay only : " <<total;

}
}


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
	        

	*/
	

