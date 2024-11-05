
//task find dry run  palindrom number and indivisual sum   
#include <iostream>
using namespace std;
int main(){
       int num ,c, s=0,r ;
       
       cout<<"Enter number ";
       cin>>num;
       c=num;
       
       while(num>0){
       	r=num%10;
        s=(s*10)+r;
        num=num/10;
	   }
	   
	   if(c==s){
	   	
	   	cout<<"palindrom number : ";
	   }
	   else{
	   	cout<<"not palindrom number : ";
	   }
}
