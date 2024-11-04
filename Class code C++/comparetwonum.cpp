// 1 write a program to take two number from user and  check who is max.
 /*
#include <iostream>
using namespace std;
int main(){
	
	int num1;
	int num2;
	cout<<"Enter First number :  " ;
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;\
	
	
	if(num1>num2){
		
		cout<<"num1 is max : " <<num1;
		
	}
	
	else{
		cout<<"num2 is max : " <<num2;
	}
}


//2 write a program to take values of length and breadth of a recttangle from user  and chek if it square or not.
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

/
// 3 write a program to take values of length and breadth of a recttangle from user also  take value of side of a square from user and cheack which area is greater.

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


// 4 write a c++ program to find maximum  between three number.
#include <iostream>
using namespace std;
int main(){
	int num1;
	int num2;
	int num3;
	cout<<"Enter your first number : ";
	cin>>num1;
	cout<<"Enter your second number : ";
	cin>>num2;
	cout<<"Enter your third number : ";
	cin>>num3;
	
	if(num1>num2){
		if(num1>num3){
			cout<<"num1 is maximum : "<<num1;
		}
		else{
			cout<<"num3 is maximum : "<<num3;
			
		}
	}
	
	else if(num2>num3){
		cout<<"num2 is maximum : "<<num2;
	}
	else{
		cout<<"num3 is maximum : " <<num3;
	}
}



// 5 write a program to input age of male or female and cheak he/she is eligible for marriage or not  ask age and gender.

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
*/
