#include <iostream>
using namespace std;
class Flight{
	private:
	 int filght_number;
	 string	departure_city;
	 string	destination_city;
	 string departure_time;
	 int availableSeats;
	 int price;
		
		public:
			
		Flight(int fn,string dep_ct,string des_ct,string tm,int avlseat,int pr){
			
	     filght_number=fn;
	     departure_city=dep_ct;
	     destination_city=des_ct;
	     departure_time=tm;
	     availableSeats=avlseat;
	     price=pr;
		}
		void getFlightDetails(){
			cout<<"Flight number :"<<filght_number<<endl;
			cout<<"Departure city :"<<departure_city<<endl;
			cout<<"Destination city :"<<destination_city<<endl;
			cout<<"Time :"<<departure_time<<endl;
			cout<<"Avalabel seat :"<<availableSeats<<endl;

			cout<<"Price :"<<price<<endl;
			cout<<"\n";
			
			}
		friend class Passenger;	
};

class Passenger:Flight{
	private:
		string passenger_name;
		
	public:
	 string (string pn){
	 	passenger_name =pn;
	 }		
	 
	 	
};
		
int main(){
	Flight fl(101,"bhopal","indore","8 pm",20,3400);
	fl.getFlightDetails();
	
}
