#include <iostream>
using namespace std;

class Employee{
	public:
		void prepare_salary(){
			cout<<"salary prepare employee\n";
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
//	Executive exc1;
//	exc1.prepare_salary();
//	exc1.promotion();
//	cout<<endl;
	
//	Executive *ptr1=new Executive;
//	ptr1->prepare_salary();
//	ptr1->promotion();

   Employee *base_ptr=new Executive;
	ptr1->prepare_salary();
	ptr1->promotion();	
}
