//01   do while loop 
#include <iostream>
using namespace std;
int main(){
	
	int n1,n2;
	char ch;
	

	
	do{
		cout<<" enter the respective symbols for performing oprstion \n";
		cout<<"+ for adddition \n - for subttaction\n * for multiphication \n";
		cout<<"/ for division \n e for exit \n Enter ur choice :" ;
		cin>>ch;
		
		if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
			cout<<"enter n1 and n2 : ";
			cin>>n1>>n2;
		}
		
		switch(ch){
			
			case '+': cout<<"add :"<<n1+n2<<endl;
		          	break; 
			
			
				
			case '-': cout<<"sub :"<<n1-n2<<endl;
		          	break;
			
			
				
			case '*': cout<<"product :"<<n1*n2<<endl;
		          	break;
			
				
			case '/': cout<<"division :"<<n1/(float)n2<<endl;
		          	break;
		          	
		          	
		     	
			case 'e': cout<<"thank for chosing our service :"<<endl;
		          	break;     	
		          	
		          	
		     	
			default : cout<<"invalid choice : "<<endl;
		           	
		          	
		          	
		          	
		}
		
}
	while( ch !='e');
	

}
