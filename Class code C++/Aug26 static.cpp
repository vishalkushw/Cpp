#include <iostream>
using namespace std;
	class Cybrom{
	  private:
	     int enroll;
		 string student_name;
		 static string institude_name;
		 
	  public:
	      Cybrom(int enro,string name)	 {
	      	enroll=enro;
	      	student_name=name;
		  }	
	static void change_institude(string new_name){
			institude_name=new_name;
		}
		  
		void display(){
			cout<<"Student name:"<<student_name<<endl;
			cout<<"Institude name:"<<institude_name<<endl;
			cout<<"tudent enroll:"<<enroll<<endl;
		}  
		
	};
string	Cybrom::institude_name="cybrom";
	
int main(){
	Cybrom obj1(102,"vishal"),obj2(103,"ram");
	obj1.display();
	obj2.display();
	Cybrom::change_institude("cybrom infotech");
	obj1.display();
	obj2.display();
}
