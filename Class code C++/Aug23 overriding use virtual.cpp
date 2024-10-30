#include <iostream>
using namespace std;

class Employee{
	public:
	virtual	void prepare_salary(){
			cout<<"salary prepare employee "<<endl;
		}
		
		void promotion(){
			cout<<"if employee year>4 ...promotion\n";
		}				
};

class Executive: public Employee{
	
	public:
		void prepare_salary(){
			cout<<"slary prepare Executive + salary +house";
		}
};

int main(){
//   Employee *objptr;
//   Executive obj;
//   objptr =&obj;

    Employee *objptr=new Executive;
   
	objptr->prepare_salary();
	objptr->promotion();	
}
