//multipal inheritance using virtual 
#include <iostream>
using namespace std;

class GrantParent{
	public:
		int data;
		void f1(){
		cout<<"this is function f1 of class Gradtparent 1\n";
		}
};

class Parent1:virtual public GrantParent{
	public:
		int data;
		void f2(){
		cout<<"this is function f2 of class Gradtparent 1\n";
		}
};
class Parent2:virtual public GrantParent{ 
	public:
		int data;
		void f3(){
		cout<<"this is function f3 of class Gradtparent 1\n";
		}
};

class Child :public Parent1,public Parent2{
	
};

int main(){
	Child obj;
	obj.f1();	
}
