//  string 
/*
#include <iostream>
using namespace std;
int main(){
	char name[5]={'a','r','j','u','n'};   //size=length of string +1  code block
	cout<<name<<endl;
	
	char name1[10]={'a','r','j','u','n','\0','p'};
	cout<<name1  <<endl;
	
	char name2[6]="arjun";
	cout<<name2 <<endl;
	
	string name3="arjun";
	cout<<name3;
}

*/

#include <iostream>
using namespace std;
int main(){
	string name;   //size=length of string +1  code block
	cout<<"enter your name ";
//	cin>>name;
	getline(cin,name);
	cout<<name;
	
}
