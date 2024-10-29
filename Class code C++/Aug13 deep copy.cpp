#include <iostream>
using namespace std;
class School{
	private:
		int *roll;
		string school_name;
		
	public:	
	 School(int r,string sch){
	 	  school_name=sch;
	 	  roll = new int;
	 	  *roll=r;		
	 }
//    //   shallow copy constructor	
//	 School(const School &s1){
//	 	school_name=s1.school_name;
//	 	roll= s1.roll;
//	 }
	 
	 //deep copy constructor
	 
	 School(const School &s1){
	 	school_name=s1.school_name;
		roll= s1.roll;
	 	*roll=*s1.roll;
	 }
	 
	 
	 void chanhe_roll(int d){
	 	*roll=d;
	 }
	 void display (){
	 cout<<"Roll:"<<*roll<<"school"<<school_name<<endl;
	 }
	 	 
};

int main(){
	School s1(101,"kvs");
	s1.display();
	
	School s2(s1);
	s2.display();
	
	s2.chanhe_roll(102);
	s1.display();
	s2.display();
		
}
