#include <iostream>
using namespace std;

 class ConcatenationAddition{
public:
	void add(int number1,int number2){
	cout<<"Add:"<<number1+number2<<endl;
}
 	void add(string s1,string s2){
	cout<<"Add:"<<s1+s2<<endl;
 }
 };

int main(){
	 ConcatenationAddition obj;
	 obj.add(2,3);
	 obj.add("function ","overloding");
}
