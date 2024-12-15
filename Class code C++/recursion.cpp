// sum of n
/*
#include <iostream>
using  namespace std;

int Sum(int n){
	if(n==0){
		return 0;
	}
	
	int prevSum=Sum(n-1);
	return n+prevSum;
}
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	cout<<Sum(n);
}
*/

/*
#include <iostream>
#include <cmath>
using  namespace std;

int Power(int n,int p){
	if(n==0){
		return 1;
	}
	
	int prevPower=pow(n ,p-1);
	return n*prevPower;
}
int main(){
	int n,p;
	cout<<"enter number and power : ";
	cin>>n>>p;
	cout<<Power(n,p)<<endl;
}
*/


/*
#include <iostream>
using  namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	
	int prevfact=fact(n-1);
	return n*prevfact;
}
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	cout<<fact(n);
}
*/
//print the nth fibonacci number
/*
#include <iostream>
using  namespace std;

int fib(int n){
	if(n==0 ||n==1){
		return n;
	}
	
	return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	cout<<fib(n);
}
*/

