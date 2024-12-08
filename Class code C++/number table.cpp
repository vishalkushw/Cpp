//write a program to print  table from range 15 to 25
/*
#include <iostream>
using namespace std;
int main(){

  int num=15;
  
  for(int num=15;num<=25;num++){
  
	for(int i=1;i<=10;i++){
			
			cout<<num<<" x " <<i <<" = "<<num*i<<endl ;
		}
		cout<<endl;
	}
}
*/

//02 
#include <iostream>
using namespace std;
int main(){
   int num1,num2;
  cout<<"enter number range : ";
  cin>>num1>>num2;
  
  
  for(int i=num1;i<=num2;i++){
  
	for(int j=1;j<=10;j++){
			
			cout<<i<<" x " <<j <<" = "<<i*j<<endl ;
		}
		cout<<endl;
	}
}



