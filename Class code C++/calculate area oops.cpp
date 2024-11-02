// 
/*
#include <iostream>
using namespace std;

class Circle{
	public:
		double radius,area ,perimeter;

	void insert_data(){
		cout<<"enter your radius:";
		cin>>radius;
	    area=3.141*radius*radius;
	    perimeter=2*3.141*radius;
	}	
	
	void display_data(){
		cout<<"circle area is : "<< area<<endl;
		cout<<"circle perimeter is : " <<perimeter;
	}			
};

int main(){
	Circle sys1;
   	sys1.insert_data();
   	sys1.display_data();
   	
}
*/

#include <iostream>
using namespace std;

class Animal{
	public:
	string name,category;
	int no_legs;

	void insert_data(){
		cout<<"enter animal name:";
		cin>>name;
		cout<<"enter animal category:";
		cin>>category;
		cout<<"enter animal legs:";
		cin>>no_legs;
	    
	}	
	
	void display_data(){
		cout<<"Animal name : "<< name<<endl;
		cout<<"Animal category : " <<category<<endl;
		cout<<"Animal legs : "<<no_legs;	
	}
	
			
};

int main(){
	Animal sys1;
   	sys1.insert_data();
   	sys1.display_data();  	
}
