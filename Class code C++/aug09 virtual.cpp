#include <iostream>
using namespace std;

class GrandParent{
	public:
		int number;
		
};

class Parent1:virtual public GrandParent{
	public:
		Parent1()
		{
			cout<<"parent1\n";
		}
	
};


class Parent2:virtual public GrandParent{
	public:
		Parent2()
		{
			cout<<"parent1\n";
		}
	
};


class Child:public Parent2,public Parent1{
	
};

int main(){
	cout<<"gp:"<<sizeof(GrandParent)<<endl;
	cout<<"p1:"<<sizeof(Parent1)<<endl;
	cout<<"p2:"<<sizeof(Parent2)<<endl;
    cout<<"c:"<<sizeof(Child)<<endl;
    Child obj;
    obj.number=90;
    obj.Parent1::number=23;
    obj.Parent2::number=20;
    cout<<obj.number<<endl;
    
}


