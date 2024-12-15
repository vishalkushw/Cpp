//// parameter, return
//#include<iostream>
//using namespace std;
//
//int add(int a,int b){
//	return a+b;
//}
//
//int main(){
//	
//	int sum=add(2,4);
//	cout<<sum;
//}

// parameter, return
#include<iostream>
using namespace std;

void add(int a,int b){
	cout<<"Sum of two number is : " <<a+b;
}

int main(){
	int num1, num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	add(num1,num2);

}





