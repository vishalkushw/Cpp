#include <iostream>
using namespace std;
void add(int number1,int number2){
	cout<<"with int ,int\n";
	cout<<"Adition:"<<number1+number2<<endl;
	
}
void add(double number1,int number2){
	cout<<"with double ,int\n";
	cout<<"Adition:"<<number1+number2<<endl;
//	
//void add(int number1,int number2,int number3){
//	cout<<"with int ,int,int\n";
//	cout<<"Adition:"<<number1+number2+number3<<endl;
//	
//}
	
}


int main(){
	add(2,3);
}
