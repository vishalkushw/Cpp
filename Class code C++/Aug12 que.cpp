//01 Design a base class Person with name and address attributes. 
//Derive classes Student and Teacher from Person.
/*
#include <iostream>
using namespace std;

class Person{
	private:	
		string name,address;
	public:	
	 Person(string nm,string add){
	 	name=nm;
	 	address=add;
	 }		
	  
	void display(){
	
		cout<<"Name : "<<name<<endl;
		cout<<"Address : "<<address<<endl;
	}	
};


class Student:public Person{
	private:
		int Rollnumber;
		string course;
		
	public:
	 Student(string nm,string add,int roll,string cou):Person(nm,add){
	 
	 	Rollnumber=roll;
		course=cou;	
	 }
	 
	void display(){
		
//		cout<<"Name:"<<name;
//		cout<<"Address:"<<address;
        cout<<"Student Informatio"<<endl;
        Person::display();
		cout<<"Rollnumber : "<<Rollnumber<<endl;
		cout<<"Course : "<<course<<endl;
		cout<<endl;
	}
	
};

 
class Teacher:public Person{
	private:
		string subject;
		int experience;
		
	public:
	 Teacher(string nm,string add,string sub,int exp):Person(nm,add){
	 
	    subject=sub;
		experience=exp;
	 }
	 
	 void display(){
	//	cout<<"Name:"<<name;
	//	cout<<"Address:"<<address;
	    cout<<"Teacher Information"<<endl;
		 Person :: display();
		cout<<"Subject : "<<subject<<endl;
		cout<<"experience : "<<experience<<endl;
	}
};

int main (){
	Student st("vishal","bhopal",102,"btech");
	Teacher tr("Ram","indore","c++",4);
	
     st.display();
     tr.display();

}
*/
//Design a base class Media with a virtual function play().
// Derive classes Audio and Video with their own play() methods.
/*
#include <iostream>
using namespace std;

class Media {
  public:
    virtual void play(){
    	
	} 
};

class Audio : virtual public Media {
  public:
    void play()  {
      cout << "Playing audio..." <<endl;
    }
};

class Video :virtual public Media {
    public:
    void play() {
        cout<< "Playing video..." <<endl;
    }
};

int main() {
    Audio audio;
    Video video;

    audio.play();
    video.play();
}

*/
//Q.5>Create a base class Employee with virtual functions 
//calculateSalary() and displayDetails().
// Derive classes Manager and Worker.



#include <iostream>
using namespace std;

class Employee {
  protected:
    string name;
    double salary;
  public:
    Employee(string nm, double sal) 
	 {
	  name=nm; 
	  salary=sal;
	}
    virtual void calculateSalary() {
    
      }
    virtual void displayDetails() {
    	
	}
};


class Manager : virtual public Employee {
   private:
     double bonus;
   public:
    Manager(string nm, double sal, double bon) : Employee(nm, sal){
	bonus=bon;
	}
    void calculateSalary() {
        salary =salary+ bonus;
    }
    void displayDetails(){
        cout << "Manager Name: " << name <<endl;
        cout << "Manager Salary: " << salary <<endl;
    }
};

class Worker : virtual public Employee {
  private:
    double overtime;
    double bonus;
  public:
    Worker(string nm, double sal, double bon) : Employee(nm, sal){
    	bonus=bon;
	}
     void calculateSalary() {
        salary =salary+bonus;
    }
    void displayDetails() {
        cout << "Worker Name: " << name <<endl;
        cout << "Worker Salary: " << salary <<endl;
    }
};

int main() {
    Manager manager("Vishal", 50000, 10000);
    Worker worker("mohan", 30000, 5000);

    manager.calculateSalary();
    manager.displayDetails();

    worker.calculateSalary();
    worker.displayDetails();


}




//Q.3>Implement a base class BankAccount with methods for 
//deposit and withdraw. Derive classes SavingsAccount and 
//CheckingAccount.
/*
#include <iostream>
using namespace std;

class BankAccount{
	protected:
		double balance;
	public:	
	 BankAccount(double bal){
	 	balance=bal;
	 }		
	  
	  void deposit(double amount){
	  	balance= balance+amount;
	  }
	  
	  void bool withdraw(double amount){
	  	if (amount>balance){
	  		return false;
		  }
		  else{
		  
	  	balance=balance-amount;
	  	return true;
	  }
	  double getBalnce(){
	  	return balance;
	  }
	  }
	  		
};


class SavingAccount:virtual public BankAccount{
	protected:
		double interestRate;
		
	public:
	 SavingAccount(double bal,double IR):BankAccount(bal){
	    interestRate =IR;
	 }
	 
     void addInterest(){
     	balance+=balance*interestRate;
     	
     	
	 }
	
};

 
class CheckingAccount:virtual public BankAccount{
	private:
		double Limit;
		
	public:
	 Teacher(double bal,double lm):Person(bal){
	 
	    Limit=lm;
	 }
	 
	 bool withdraw(double amount){
	 	if(amount>balance+limit){
	 		return false;
		 }
		 
		 else{
		 	balnce-= amount;
		 	return true;
		 }
	 }
	
};

int main (){
SavingAccount saving(2000,0.06);
CheckingAccount checking(1500,300);
saving.deposit(600);
saving.addInterest();

cout<<"saving balance:"<<saving.getbalnce();

checking.withdraw(800);
cout<<"cheking balance:"<<cheking.getbalnce();


}
*/
