//1)Write a C++ program to define a class named Circle.
//private member: radius
//public member functions:calculate_area(),calculate_circumference()
/*
#include <iostream>
using namespace std;

class Circle{
	private:
		double radius;
		
	public:
	  Circle (double r){
	  	radius=r;
	  }	
		
	double calculate_area(){
	 return	3.1415*radius*radius;
		
	}
	double calculate_circumference(){
	 return	2*3.1415*radius;	
	}		
};


int main(){
	Circle c(6);
	cout<<"Area :" <<c.calculate_area()<<endl;
	cout<<"circumference :"<<c.calculate_circumference();
	
}
*/


//2)Write a C++ program to define a class named  Rectangle.
//private member:length and width
//public member functions:calculate_area(),calculate_perimeter()
/*
#include <iostream>
using namespace std;

class Rectangle{
	private:
		double length,width;
		
	public:
	  Rectangle(double lh,double wh){
	  	
	  	length=lh;
	  	width=wh;
	  }
	  
	  double calculate_area(){
	    return length*width;
	  }
	  
	  double calculate_perimeter(){
	  return 2*(length+width);
	  }
	  	
};
int main(){
	Rectangle r(5,6);
	cout<<"area:"<<r.calculate_area()<<endl;
	cout<<"perimeter:"<<r.calculate_perimeter();	
}

*/

#include <iostream>
using namespace std;

class Employee{
    protected:
 string name;
 int performance;
 public:
 Employee (string nm,int per){
   name=nm;
   performance=per;
 }
};
class EmpSalary: public Employee{
   private:
   double salary,basic,hra,da,pf,bonus;
   public:
   EmpSalary(string nm, int per, double bas, double hr, double d, double p) : Employee(nm, per){
    basic= bas;
    hra= hr;
    da= d;
    pf= p;
    bonus=bon();
    salary=emp_salary();
   }
    
    int emp_salary(){
       return basic+hra+da-pf;
    }
    int bon(){
    if(performance>=2){
        int bonu=2000;
        salary=salary+2000;
        return bonu;
    }
    }
     void display(){
       cout<<"Employee Name "<<name<<endl;
       cout<<"The salary of Employee "<<salary<<endl;
       cout<<"Bonus "<<bonus<<endl;
   }
};

int main(){
    EmpSalary obj("Pawan",3,50000,5000,12000,7000);
    obj.display();
}


