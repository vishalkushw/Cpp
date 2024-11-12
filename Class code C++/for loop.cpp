// 01 numbe print 1 to 10
/*
#include<iostream>
using namespace std;
	int main (){
		
	
		
		for(int i=1; i<=10; i++ ){
			
			cout<<i<<endl;
	    	
		}
	}

// 02 number print in reverse 50 to 1
	
#include<iostream>
using namespace std;
	int main (){
	
		for(int i=50; i>=1; i-- ){
			
			cout<<i<<endl;
	    	
		}
	}
	
	
	//03 
	#include <iostream>
	using namespace std ;
	int main(){
		int num ,sum=0;
		cout<<"Enter your number : ";
		cin>>num;
		
		for(int i=1;i<=num;i++){
			cout<<i;
			if(i<num){
				cout<<"+";
			}
			sum=sum+i;
		}
		cout<<"= "<<sum;
	}
	
	//04
	
	#include <iostream>
	using namespace std ;
	int main(){
		int num;
		cout<<"Enter number";
		cin>>num;
		
		for(int i=1;i<=10;i++){
			cout<<num*i <<endl;
			
    	}
    	
     }
     
	 // 05 multiple input in a loop
     
     #include <iostream>
      using namespace std ;
	  int main(){
		int n,sum=0,num;
		cout<<"Enter range : ";
		cin>>n;
		
		for(int i=1;i<=n;i++){
			cout<<"Enter a number : " ;
			cin>>num;
			sum=sum+num;
			
		
		}
			cout<<"sum "<<sum;
    	}
    	
    	*/
    	 #include <iostream>
      using namespace std ;
	  int main(){
		int n,sum=0,num,even=0,odd=0;
		cout<<"Enter range : ";
		cin>>n;
		
		for(int i=1;i<=n;i++){
			cout<<"Enter a number : " ;
			cin>>num;
			
			if(num%2==0){
				
				even=even+num;
			}
			else{
				odd=odd+num;
			}
		sum=sum+num;
			
		}
			cout<<"sum "<<sum<<endl;
			
			cout<<"even sum "<<even<<endl;
			cout<<"odd sum"<<odd;
    	}
    	
    	/*
    	//07
    		 # include <iostream>
      using namespace std ;
	  int main(){
		int n,sum=0,num,even=0,odd=0,max=0;
		cout<<"Enter range : ";
		cin>>n;
		
		for(int i=1;i<=n;i++){
			cout<<"Enter a number : " ;
			cin>>num;
			
			if(num%2==0){
				
				even=even+num;
			}
			
			if(num>=40 &&num<=60){
				
				max=max+num;
			}
			
			else{
				odd=odd+num;
			}
	    	sum=sum+num;
			
		}
			cout<<"sum "<<sum<<endl;
			
			cout<<"even sum : "<<even<<endl;
			cout<<"odd sum : "<<odd <<endl;
			
			cout<<"40 to 60 num range is : "<<max;
    	}
    	
    	
    	//8 
    
    
    	*/
     //09
   
	
