//01
/*
#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your mark : ";
	cin>>marks;
	
    	if(marks>=90){
	    	cout<<"Grade A "<<marks;

	    }
		else if (marks>=80 || marks>90){
			cout<<"Grade B "<<marks;
		}
		else if(marks>=70||marks>80){
			cout<<"Grade C "<<marks;
		}
		else if(marks>=60||marks>70){
			cout<<"Grade D "<<marks;
		}
		else if(marks>60){
			cout<<"Grade F "<<marks;
				
        	}
		}
	
	
	//02
	#include <iostream>
	using namespace std ;
	int main (){
		
		int age;
		cout<<"Enter your age : ";
		cin>>age;
		
		if (age<13){
			cout<<"Childe : "<<age;
		}
		
		else if(age>=13 && age<20){
			cout<<"Teenager : "<<age;
			
		}
		
		else if(age>=20  && age<65){
			cout<<"Adult : "<<age;
		}
		else if(age>=65){
			cout<<"Senior : "<<age;
		}
		
	}	
	
	/*
	//03
	#include <iostream>
	using namespace std ;
	int main (){
		double num1,num2;
		cout<<"enter number";
			cin>>num1>>num2;
			if(num1>num2){
				cout<<"greter ";
				
			}
			else{
				cout<<"not greter";
			}
		}
		
	//04
	
	#include <iostream>	
	using namespace std;
	int main(){
		int score;
		cout<<"Enter your score : ";
		cin>>score;
		
		if(score>=85){
			cout<<"Eligible for science";
			
		}
		
		else if(score>=70 && score<85){
			cout<<"eligible for commerce " ;
		}
		else if(score>=50 && score<70){
			cout<<"Eligible for Arts:";
		}
		else if(score<50){
			cout<<"not eligible for admission : ";
		}

	
		}
		
		
		
		//05
		
		#include <iostream>
		using namespace std;
		int main(){
			int units;
			cout<<"Enter your unit : " ;
			cin>>units;
			
			if(units<=100){
				cout<<"rate per units rs 1";
				
			}
			else if(units>00 && units<=200){
			
				cout<<"rate per units rs 1.5 ";
				
			}
			else if(units>200){
			
				cout<<"rate per unit rs 2 :";
			}
		}
		
	
	//06
	#include<iostream>
	using  namespace std;
	int main(){
	      int number;
	      cout<<"Enter your number : ";
	      cin>>number;
	      
	      switch(number%2){
		  
	      	case 0 : 
	      	cout<<"number is even : "<<number;
	      	break;
	      	
	      	case 1 : 
	      	cout<<"number is odd : " <<number;
	      	break;
		  
		  
		  default :
		  	cout<<"invalid input";
       }
	}
	
	
	//07
	#include<iostream>
	using namespace std;
	int main(){
		int num;
		cout<<"Enter your number 1 to 7 : " ;
		cin>>num;
		switch(num){
			case 1 :cout<<"Monday";
			       break;
			
			case 2:cout<<"Tuesday";
			       break;
			
		 	case 3:cout<<"Wednesday";
			       break;
			
			
			case 4:cout<<"Thursday";
			      break;
			
				case 5:cout<<"Friday";
			           break;
			
			case 6:cout<<"Saturday";
		       	break;
			
			case 7:cout<<"Sunday";
		        	break;
			
			default:
				cout<<"invalid number";
		}
	}
	
	
	//08
	#include <iostream>
	using namespace std;
	int main(){
		
		int num;
		cout <<"Enter your number 1 to 12 : ";
		cin >>num;
		
		if (num==12 || num==1 ||num==2){
			cout<<"Winter";
			
		}
		 else if (num==3 || num==4 ||num==5){
			cout<<"Spring";
			
		}
		 else if (num==6 || num==7 ||num==8){
			cout<<"Summer";
			
		}
		else if (num==9 || num==10 ||num==11){
			cout<<"Autumn";
			
		}
		
		else{
			cout<<" Invalid number ";
		}
			
			
	}
	
	
	
	//09
	#include <iostream>
	using namespace std ;
	int main(){
		int num ;
		cout<<"Enter your number : ";
		cin >>num;
		
		if(num%2==0 && num%3==0 && num%5==0){
			cout<<"number is divisible by 2 "<<endl;
			cout<<"number is divisible by 3 "<<endl;
			cout<<"number is divisible by 5 ";
			
		}
		else{
			cout<<"number is not divisible by 2,3 or 5  ";
		}
	}
	
	
	//10
	
	#include <iostream>
     using namespace std;
    int main(){
	int marks;
	cout<<"Enter your mark : ";
	cin>>marks;
	
	if(marks>=90){
		cout<<"Excellent "<<marks;
		
		if(marks==100)
		{
			cout<<" : topper of the school ";
		}

     	}
		else if (marks>=75 || marks>90){
			cout<<"Very good "<<marks;
		}
	    else if(marks>=50||marks>75){
			cout<<"Good "<<marks;
		}
		else if(marks>=35||marks>50){
			cout<<"Need improvment "<<marks;
		}
		else if(marks>35){
			cout<<"Fail "<<marks;
				
        	}
		}
		
		//11
		
		#include <iostream>
        using namespace std;
        int main(){
            char A;
	        cout <<"Enter you character : ";
	        cin >>A;
	        if(A == 'a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U'){
		        cout<<"it is vowel : "<<A;
	            }
	           else{
		        cout<<"it is consonant : "<<A;
               	}
          }
          
        
		
		
 //12
	        #include<iostream>
	        using namespace std;
	        int main(){
	        	
	        	int num1, num2 ;
	        	char choise, S,C,R;
				int  square,circle,rectangle;
	        	cout<<"Enter first number : ";
	        	cin>>num1;
	        	cout<<"Enter  second number : ";
	        	cin>>num2;
	        	cout<<"Enter your choise Square'S' circle'C' rectangle 'R' : ";
	        	cin>>choise;
	        	
	        	switch(choise){
	        		
	        		case 'S': square=num1*num1;
	        		cout<<"Square is "<<square;
	        		break;
	        		
	        		case 'C': circle= 3.14*num1*num2;
	        		cout<<"circle is "<<circle;
	        		break;
	        		
	        		case 'R': rectangle=num1*num2;
	        		cout<<"rectangle is "<<rectangle;
	        		break;
	        		
	        		default: cout<<"Invelid choise";
	        		
				}
	        	
	        	
			}
			

    //13
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
			
			else if(amount>=500 && amount<1000){
				dis=amount*(10.0/100);
				cout<<"dicount is  10%: "<<dis<<endl;
				cout<<"you pay :"<<amount-dis;
	        	}
	        	
	        else{	
				cout<<" No dicount : "<<endl;
				cout<<"you pay :"<<amount;
		}
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
#include <iostream>
using namespace std;
int main(){
	int weight;
	cout<<"enter your weight : ";
	cin>>weight;
    if(weight<=5) {
    	cout<<"shipping cost is 5 ";
    	
	}
	
	else if (weight>5.1 && weight<=10){
		cout<<"shipping cost is 10 ";
		
	}
	else if (weight>=10.1 && weight<=20){
		cout<<"shipping cost is 15 ";
	}
	else if(weight>20){
		cout<<"shipping cost is 20 ";
	}
	}
	
	
	//16
	#include <iostream>
    using namespace std;
    int main(){
	int amount ,dis;
	cout<<"enter your amount : ";
	cin>>amount;
    if(amount<=100) {
    	dis=amount*(0.0/100);
    	amount=amount-dis;
    	cout<<"No discount " <<dis<<endl;
    	cout<<"You pay only : "<<amount;
    	
	}
	
	else if(amount>=101 && amount<=500){
		
		    dis=amount*(10.0/100);
    	    amount=amount-dis;
		    cout<<"Discount is 10% "<<dis<<endl;
		    cout<<"You pay only : "<<amount;
    	
		
	}
	else if (amount>=501 && amount<=1000){
			dis=amount*(20.0/100);
    	    amount=amount-dis;
		    cout<<"Discount  is 20% "<<dis<<endl;
		    cout<<"You pay only : "<<amount;
    	
	}
	else if(amount>1000){
			dis=amount*(30.0/100);
    	    amount=amount-dis;
		    cout<<"Discount is 30 % "<<dis<<endl;
		    cout<<"You pay only : "<<amount;
    	
	}
	}
	
	
	//17
	
	#include <iostream>
		using namespace std;
		int main(){
			double units;
			cout<<"Enter your unit : " ;
			cin>>units;
			
			if(units<=100){
				units= units*0.50;
				cout<<"rate per units  0.50  : "<<units;
				
			}
			else if(units>=101 && units<=200){
				units= units*0.75;
				cout<<"rate per units 0.75 : "<<units;
				
			}
			else if(units>=201 && units<=300){
				units= units*1.20;
				cout<<"rate per units 1.20 : "<<units;
				
			}
			
			else if(units>300){
				units= units*1.50;
				cout<<"rate per unit 1.50 :"<<units;
			}
		}
	
	//18
	#include <iostream>
	using namespace std;
	int main(){
		double income ,tax;
		cout<<"Enter your income : ";
		cin>>income;
		
		if ( income<=10000){
			
			cout<<"No tax "<<income;
		}
		
		else if(income>=10001 && income<=20000){
			tax= income*(10.0/100);
			cout<<"Tax is 10% you pay : "<<tax;
		}
		
		else if(income>=20001 && income<=30000){
			tax= income*(20.0/100);
			cout<<"Tax is 20% you pay : "<<tax;
		}
		
		else if(income>=30000){
		
			tax= income*(30.0/100);
			cout<<"Tax is 30% you pay : "<<tax;
		}
	}
	
	
	//19
	#include <iostream>
     using namespace std;
      int main(){
	  int amount ,commission;
	  cout<<"enter your amount : ";
      cin>>amount;
     	
        if(amount<=5000) {
            commission=amount*(2.0/100);
    	    amount=amount-commission;
    	    cout<<"commission is 2%  " <<commission<<endl;
    	    cout<<"You pay only : "<<amount;
    	
	}
	
	else if(amount>=5001 && amount<=10000){
		
		commission	=amount*(5.0/100);
    	amount=amount-commission;
		cout<<"commission is 5% "<<commission<<endl;
		cout<<"You pay only : "<<amount;
    	
		
	}
	else if (amount>=10001 && amount<=20000){
		commission	=amount*(7.0/100);
    	amount=amount-commission;
		cout<<"commission is 7% "<<commission<<endl;
		cout<<"You pay only : "<<amount;
    	
	}
	else if(amount>20000){
			commission=amount*(10.0/100);
    	amount=amount-commission;
		cout<<"commission is 10% "<<commission<<endl;
		cout<<"You pay only : "<<amount;
    	
	}
	}
	
*/





