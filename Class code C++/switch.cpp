#include <iostream >
using namespace std;
int main(){
	int num1 ,num2 ;
	char choise;
	
	cout<<"enter your first  number : ";
	cin>>num1;
	cout<<"enter your second  number : ";
	cin>>num2;
	cout<<"enter your choise +, - ,* ,/ : ";
	cin>>choise;
	
	switch(choise){
	
		
		case '+' :cout<<"Add : " <<num1+num2;
		           break;
	
	
	case '-' : cout<<"sub : "<<num1-num2;            
	             break;
	         
	
	case '*' : cout<<"product : "<<num1*num2;
	            break;
	        
	
	case '/' :cout<<"division : "<<num1/(float)num2;
	            break;
	        
	            
	default :cout<<"invalid choise : ";
	        break;
	    	
}
		
}
