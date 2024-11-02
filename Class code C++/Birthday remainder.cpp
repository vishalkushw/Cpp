//#include <iostream>
//using namespace std;
//
//int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//
//class Date{
//	private:
//		int day,month,year;
//		static int todayday,todaymonth,todayyear;
//	public:
//	Date(int d,int m ,int y){
//		day=d;
//		month=m;
//		year=y;
//	}
//	void display(){
//		cout<<"my date of birth is"<<day<<"/"<<month<<"/"<<year<<endl;
//	}	
//	
//	void todaydate(){
//		cout<<"today is"<<todayday<<"/"<<todaymonth<<"/"<<todayyear;
//	}
//};
//
//int Date::todayday=02;
//int Date::todaymonth=07;
//int Date::todayyear=2024;
//
//int main(){
//	int  day ,month ,year;
//	cout<<"enter your date of birth :";
//	cin>>day>>month>>year;
//	Date obj(day,month,year);
//	obj.display();
//	obj.todaydate();
//	
//}


#include <iostream>
using namespace std;

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date {
private:
    int day, month, year;
    static int todayday, todaymonth, todayyear;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() {
        cout << "My date of birth is " << day << "/" << month << "/" << year << endl;
    }

    void todaydate() {
        cout << "Today is " << todayday << "/" << todaymonth << "/" << todayyear << endl;
    }

    void birthdayReminder() {
        if (month == todaymonth && day == todayday) {
            cout << "Happy Birthday!" << endl;
        } else {
            int remainingDays = 0;
            // calculate remaining days
            remainingDays = (todaymonth - month) * days[todaymonth - 1] + (todayday - day);
            cout << "Your birthday is in " << remainingDays << " days." << endl;
        }
    }
};

int Date::todayday = 02;
int Date::todaymonth = 07;
int Date::todayyear = 2024;

int main() {
    int day, month, year;
    cout << "Enter your date of birth: ";
    cin >> day >> month >> year;
    Date obj(day, month, year);
    obj.display();
    obj.todaydate();
    obj.birthdayReminder();
}
