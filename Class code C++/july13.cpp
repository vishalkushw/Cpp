/*
#include <iostream>
using namespace std;
int main(){
	string f1="apple";
	
	string f2="banana";
	
	string f3="pineapple";
	
//	f1=f1+f2;
 
  //  f1.append(f2);
	
//	cout<<f1;
  //  f2.append(f1);
  
  f1.append(f2.append(f3));
	
	cout<<f2;
}

//push back

#include <iostream>
using namespace std;
int main(){
	string f1="apple";
	
	string f2="banana";
	
	f1.push_back('r');

	cout<<f1;
}

//pop back

#include <iostream>
using namespace std;
int main(){
	string f1="apple";
	
	string f2="banana";
	
//	f1.pop_back();

	cout<<f1;
}

*/

#include <iostream>
using namespace std;
int main(){
	string f1="";
	
	for(int i=0;i<=20;i++){
		f1.push_back('a');
		cout<<"size : "<<f1.size()<<" capacity :"<<f1.capacity()<<endl;
	}

	cout<<f1;
}
