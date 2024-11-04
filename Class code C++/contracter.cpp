/*
#include <iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk,ram;
		
		System(){    //constracter
			name="";
			category="";
			hard_disk=0;
			ram=0;
		}
		
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
   	sys2.insert_data();
   	sys2.display_data();
   }
*/

#include <iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk,ram;
		
		System(){    // defaultconstracter
			name="";
			category="";
			hard_disk=0;
			ram=0;
			cout<<"default";
		}
		
		
		System(string n ,string c,int hd, int rm){    //parametertized dconstracter 
			name=n;
			category=c;
			hard_disk=hd;
			ram=rm;
			cout<<"parametertized "<<endl;
		
	}
		
		
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
   	System sys1;
   	
   //	sys1.insert_data();
  // 	sys1.display_data();
   	
   System sys2("hp","laptop",1,16);
   	sys1.display_data();
   	sys2.display_data();
   }
