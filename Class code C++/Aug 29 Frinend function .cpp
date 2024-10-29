#include <iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
	public:
	  Bank(int bal,string nm)	{
	  	balance=bal;
	  	name=nm;
	  }
	  void display(){
	  	cout<<"Name : "<<name<<" Balance : "<<balance<<endl;
	  }
	  friend class PhonePe;
	  friend void f1(Bank &obj);
};


 void f1(Bank obj ){

    cout<<obj.name<<endl;
}

 class PhonePe{
	public:
		void deposite(Bank &obj,int amount){
			obj.balance=obj.balance+amount;
		}
		
		void withdraw(Bank &obj,int amount){
			obj.balance=obj.balance-amount;
		}
};

int main(){
	Bank obj(40000,"vishal");
	obj.display();
	
//    obj = PhonePe(obj, 8000);
//    obj.display();

    //PhonePe obj_phonepe;
	f1.deposit(obj);
    obj.display();
	
}

