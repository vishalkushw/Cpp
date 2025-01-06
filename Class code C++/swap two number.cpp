// Q.1)WAP to swap the value of 2 variable with each other 
//     using call by value and call by reference.
/*
#include <iostream>
using namespace std;
void swap(int num1,int num2){ //call by value
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After swaping : "<<num1 <<" "<<num2;
	return ;
}
int main(){
	int number1 =20,number2=30;
	cout<<"Befor swaping : "<<number1 <<" "<<number2<<endl;
   swap(number1,number2);
 
}
*/
/*
//call by reference
#include <iostream>
using namespace std;
void swap(int &num1,int &num2){ 
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After swaping : "<<num1 <<" "<<num2;
	return ;
}
int main(){
	int number1 =20,number2=30;
	cout<<"Befor swaping : "<<number1 <<" "<<number2<<endl;
   swap(number1,number2);
 
}

*/
/*
Q.2)WAP to manipulate the following string as
s="we are here to learn";
output="we$are$here$to$learn";// replace space with '$'
a) by call by value method :
parameter : string
return :string

b) by call by reference method :
parameter : string
return :void


*/

// call by value 
/*
#include <iostream>
using namespace std;
string replace(string s){
	int size =s.size();
	for(int i=0;i<size;i++){
		if(s[i]==' '){
			s[i]='$';
		}
	}
	return s;
}
int main(){
	string s="we are here to learn";
    string result=replace(s);
    cout<<result;
}
*/

#include <iostream>
using namespace std;
void replace(string &s){
	int size =s.size();
	for(int i=0;i<size;i++){
		if(s[i]==' '){
			s[i]='$';
		}
	}
	cout<<s;
	return ;
}
int main(){
	string s="we are here to learn";
	replace(s);
}
