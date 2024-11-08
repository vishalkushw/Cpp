//write a program create a class name employ having data members eid ,ename 
//edob, department ,esallery, parameter contructor display data 
//create sallery filter records

#include <iostream>
using namespace std;

class Employee{
	public:
		int eid;
		string ename,dob,department;
		double salary;
		
		Employee(int id,string name,string date,string dep,double sal){
		eid=id;
		ename=name;
		dob=date;
		department=dep;
		salary=sal;	
		}
	void display(){
		cout<<"Employee id :"<<eid<<" Employee name :"<<ename<<endl;
		cout<<"Date : "<<dob<<" Department :"<<department<<endl;
		cout<<"salary :"<<salary<<endl;
	}	
};

int main(){
 Employee *objptr =	new Employee(101,"Ajay","06/08/2001","IT",40000);
 objptr->display();
 
 Employee *objptr1 =new Employee(102,"vijay","02/08/2001","IT",30000);
 objptr1->display();
}
