/*
#include <iostream>
using namespace std;

class Parent{
	private:
		void f1(){
			cout<<"this is a private function f1 of class parent\n";
		}
	protected:
	        void f2(){
	        cout<<"this is a protected function f2 of class parent\n";	
			}	
	public:
	     void f3(){
	     	cout<<"this is a public function f3 of class parent\n";
		 }  		
};

class Child: public Parent{
	
	//f3() public
	//f2() protected
	public:
		void f4(){
			f2();//indirectly taking access of f2()
		}
	
};



int main(){
	Child obj;
	obj.f4();
	
}
*/


//wap to create class Univercity having data member,
//univercity_name,address,session,number_of_streams,number_of_collage
//member function parameterized constructer  setter(),getter()
//create a child class college having attribute   data member:
//college_name,addres,number_of_student
//create a child class Student having attribute
//data member: student_name,address


#include <iostream>
using namespace std;

class Univercity{
	private:
	string	univercity_name;
	string	address;
	string	session;
	int	number_of_streams;
	int	number_of_collage;
	
	public: Univercity(string un,string ad, string seon,int nos,int noc){
		univercity_name=un;
		address=ad;
		session=seon;
		number_of_streams=nos;
		number_of_collage=noc;
	}
	
	void setter(){
       cout<<"Enter univercity name :"<<endl;
	   cin>>univercity_name;
	   cout<<"Enter addres :"<<endl;
	   cin>>address;
	   cout<<"Enter session:"<<endl;
	   cin>>session;
       cout<<"Enter number of stream :"<<endl;
	   cin>>number_of_streams;
	   cout<<"Enter number of collage :"<<endl;
	   cin>>number_of_collage;
	}
	
	void getter(){
	}
};

  class Collage :public Univercity{
  	  public:
  	  string college_name;
	  string addres;
	  int number_of_student;
  	  	
  };
  
  class Student :public Collage{
  	public:
  	string	student_name;
	string	address;
  };


int main(){
	Univercity obj();
	obj.setter;

}
