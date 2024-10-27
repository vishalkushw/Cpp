//1)Write a C++ program to define a class named Circle.
//private member: radius
//public member functions:calculate_area(),calculate_circumference()

/*
#include <iostream>
using namespace std;

class Circle{
	private :
		double radius;
	
	public:
		Circle (double r){
			radius=r;
		}
		
	 double calculate_area(){
	 	return 3.1415*radius*radius;
	 	
	 }	
	 
	double calculate_circumference(){
		return 2*3.1415*radius;
		
	} 
};
int main(){
	Circle c(6);
	cout<<"Area : "<<c.calculate_area()<<endl;
	cout<<"Circumference : "<<c.calculate_circumference();
	
}
*/

//2)Write a C++ program to define a class named  Rectangle.
//private member:length and width
//public member functions:calculate_area(),calculate_perimeter()
/*
#include <iostream>
using namespace std;

class Rectangle{
	private :
		double length,width;
	
	public:
		Rectangle (double l ,double b){
			length=l;
			width=b;
		}
		
	 double calculate_area(){
	 	return length*width;
	 	
	 }	
	 
	double calculate_perimeter(){
		return 2*(length+width);
		
	} 
};
int main(){
	Rectangle r(6,5);
	cout<<"Area : "<<r.calculate_area()<<endl;
	cout<<"Circumference : "<<r.calculate_perimeter();
	
}
*/

//3)Write a C++ program to define a class named  Person.
//private member: name, age and country
//constructor: initialized values (parameterized)
//public member functions:getter()--->to get all values
//change_age()--->to change the age of given objects.
/*
#include <iostream>
using namespace std;

class Person{
	private :
		string name,country;
		int age;
		
	public:
		Person (string n ,int a,string c){
			name=n;
			age=a;
			country=c;
		}
		
	 void getter(){
	 	cout<<"Name : "<<name<<endl;
	 	cout<<"Age :  "<<age<<endl;
	 	cout<<"Country : "<<country<<endl;
	 	
	 }	
	 
	void change_age(int new_age){
		age=new_age;
		
	} 
};
int main(){
	Person p("Vishal" ,22,"India");
	p.getter();
	cout<<endl;
	
	cout<<"Change age : "<<endl;
	p.change_age(23);
	p.getter();
	
}

*/


//5)Write a C++ program to define a class named Car.
//protected member: company, model, and year
//constructor: initialized values (parameterized)
//public member functions:getter(),setter()
/*
#include <iostream>
using namespace std;

class Car{
	protected :
		string company, model ;
		int year;
		
	public:
		Car (string c,string m,int y){
			company=c;
			model=m;
			year=y;
		}
		
	 void getter(){
	 	cout<<"company : "<<company<<endl;
	 	cout<<"model :  "<<model<<endl;
	 	cout<<"year : "<<year<<endl;
	 	
	 }	
	 
	void setter(string c,string m ,int y){
		company=c;
		model=m;
		year=y;
		
	} 
};
int main(){
	Car c("TaTA" ,"Thar",2020);
	c.getter();
	cout<<endl;
	
	cout<<"Change value "<<endl;
	c.setter("Honda","Baleno",2024);
	c.getter();
	
}
*/

//8)Write a C++ program to define a class named Employee.
//private member: name, employee ID, dep ,designation,
//performance(bad-0,avg-1,good-2,very-good-3,best-4
// (use default constructor)
//public member functions:setter(),getter()

#include <iostream>
using namespace std;

class Employee{
	private :
		string name;
		int employeeID;
		string dep;
		string designation;
		int performance;
		
	public:
		Employee (){
			name="";
			employeeID=0;
			dep="";
			designation="";
			performance=0;
		}
		
	void setter(string n,int id ,string dp ,string deg ,int per){
			name=n;
			employeeID=id;
			dep=dp;
			designation=deg;
			performance=per;
		
	} 
	
	void getter(){
		cout<<"Name:"<<name<<endl;
		cout<<"Employee ID : "<<employeeID<<endl;
		cout<<"department:"<<dep<<endl;
		cout<<"Designation:"<<designation<<endl;
		cout<<"Performance"<<performance;
		switch (performance) {
            case 0:
                cout << "Bad" << endl;
                break;
            case 1:
                cout << "Average" << endl;
                break;
            case 2:
                cout << "Good" << endl;
                break;
            case 3:
                cout << "Very Good" << endl;
                break;
            case 4:
                cout << "Best" << endl;
                break;
            default:
                cout << "Invalid performance rating" << endl;
        }
	}
};
int main(){
	Employee emp;
	emp.setter("vishal",2345,"web developer","eng",4);
	emp.getter();
		
}
