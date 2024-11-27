#include<iostream>
using namespace std;

int calculater(int num1,int num2,string opration){
        if(opration=="add")
        return (num1+num2);
        
        else if(opration=="sub")
        return (num1-num2);
        
        else if(opration=="multi")
        return (num1*num2);
        
        else if(opration=="divide")
        return (num1/(float)num2);
}
int main(){
	int number1,number2;string opration;
	
	cout<<"Enter two number : ";
	cin>>number1>>number2;
	cout<<"Enter opration: ";
	cin>>opration;
	
  int result =calculater(number1,number2,opration);
  cout<<result<<endl;
	
}
