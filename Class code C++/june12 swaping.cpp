// 01  write a program  to swap the valu of two variable with eatch other                           12/06/24
/*
#include<iostream>
using namespace std;
int main(){
	int n1,n2,temp;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
		cout<<"Before swapping number 1 : "<<n1<<" number 2 : "<<n2<<endl;
	
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swapping number 1 : "<<n1<<" number 2 : "<<n2<<endl;
	
	
	
}



// 02  value swaping  without  using third variable

#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
		cout<<"Before swapping number 1 : "<<n1<<" number 2 : "<<n2<<endl;
     n1=n1+n2;
     n2=n1-n2;
     n1=n1-n2;
	cout<<"After swapping number 1 : "<<n1<<" number 2 : "<<n2<<endl;
	
	
	
}
*/

// 03   write a program  to display fibonacci series  of n terms . 
//  0 1 1 2 3 5 8 13......            n=5     0 1 1 2 3        n=7   0 1 1 2 3 5 8

#include <iostream>
using namespace std;
int main(){
	int n,n1=0,n2=1,n3;
	cout<<"enter range : ";
	cin>>n;
	
	cout<<n1<<" "<<n2<<" ";
	for(int i=1; i<=n-2; i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
}






