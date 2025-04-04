# include <iostream>
using namespace std;

class Employee{
  private:
     string name,department,desig;
     int eid;

     void setperformance(){
        int choice;
       cout<<"please select performance in the following options:\n";
       cout<<" '0-bad' ,'1-avg','2-good','3-vgood','4-best' :";
       cin>>choice;
       switch(choice){
           case 0: performance="bad";break;
           case 1: performance="average";break;
           case 2: performance="good";break;
           case 3: performance="v good";break;
           case 4: performance="best";break;
           default:performance = "invalid input";break;
       }
    }
  protected:
       string performance;

   public:

     Employee(){
      cout<<"enter eid,name,department,designation";
      cin>>eid>>name>>department>>desig;
      setperformance();
     }

       void display(){
          cout<<"Eid:"<<eid<<endl;
          cout<<"Name:"<<name<<endl;
          cout<<"DEoartment:"<<department<<endl;
          cout<<"Designation:"<<desig<<endl;
          cout<<"Performance:"<<performance<<endl;

       }
};

class EmpSalary: public Employee{
   private:
    double salary,basic,hra,da,pf;

    double prepare_salary(){
     return  basic+hra+da-pf;
    }

   public:
      EmpSalary(double b ,double h,double d_a,double p_f):Employee(){
        basic=b;
        hra=h;
        da=d_a;
        pf=p_f;
        salary=prepare_salary();
      }

      void bonus(){
         if(performance=="good" || performance =="vgood"
                               || performance=="best"){

              salary=salary+2000;
            }
      }

      void display(){
      	Employee::display();
         cout<<"Net salary:"<<salary<<endl;
      }
};

int main(){
    EmpSalary employee1(12000,3000,1200,2000);
    employee1.bonus();
    employee1.display(); 
    return 0;
}
