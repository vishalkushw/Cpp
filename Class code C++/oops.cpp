//write a program to create a class Named ststem  having 
//attribute(data member),
//name,ram,hard_disk,behaviour,(member function )
//processing(),input(),output()

#include <iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk,ram;
		
	void insert_data(){
		cout<<"enter name and category of the system:";
		cin>>name>>category;
		cout<<"mention it HD and RAM : ";
		cin>>hard_disk >>ram;
	}	
	
	void display_data(){
		cout<<"name:"<<name << "category:"<<category<<endl;
		cout<<"HD:"<<hard_disk <<" RAM :"<<ram;
	
	}	
	
	void input(){
		cout<<name<<"system takes some input\n";
	}
	void process(){
		cout<<name<<"system start processing\n";
	}
	void output(){
		cout<<name<<"system takes some output\n";
	}	
};
   int main(){
   	System sys1,sys2;
   	sys1.insert_data();
   	sys1.display_data();
   	sys1.input();
   	sys1.process();
   	sys1.output();
   }

