//1
#include <iostream>
using namespace std;
int main(){
	
	int amount;
	string name, address  ,type;
	char L,D;
	double dis;
	
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your address : ";
	cin>>address;
	cout<<"Enter your amount of purchse : ";
	cin>>amount;
	cout<<" purchase type Laptop for 'L' and Destop for 'D'";
	cin>>L>>D;

	
	if(amount>0 && amount<=25000){
		dis=amount*(0.0/100);
		cout<<"discount : "<<dis<<endl;
		cout<<name<<address<<"you have pay : "<<amount - dis;
	}
	else if(amount>25001 && amount<57000){
		dis=amount*(5.0/100);
		cout<<"discount : "<<dis<<endl;
		cout<<name<<address<<"you have pay : "<<amount-dis;
	}
	else if(amount>=57000 && amount<=100000){
		dis=amount*(7.5/100);
		cout<<"discount : "<<dis<<endl;
		cout<<name<<address<<"you have pay  : "<<amount-dis;
	}
	else if(amount>100000 ){
		dis=amount*(10.0/100);
		cout<<"discount : "<<dis<<endl;
		cout<<name<<address<<"you have pay : "<<amount-dis;
	}

}

//
//20

#include <iostream>
using namespace std;
int main(){
	int number, choise ,change;
	cout <<"Enter your number : ";
	cin>>number;
	cout<<"Enter your choise 1 to 4 : ";
	cin>>choise;

	
	
	switch(number){
		
		case 1 : 	change = number*100;
	        	cout<<number<<"metre to centimeter is "<<change;
	        	
	        	
	        	
	   	case 2 : change = number*0.01;
	        	cout<<number<<"centimeter to meter is "<<change;
	        
			
	}
}
