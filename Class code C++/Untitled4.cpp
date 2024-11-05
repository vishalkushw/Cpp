/* Write a program to calculate gross and net pay of employee from basic 
salary.Create employee class which consists of employee name, emp_id,
and basic salary as its data members. Use parameterized constructor in 
the derived class to initialize data members of the base class and 
calculate gross and net pay of the employee in the derived class? */

#include <iostream>
using namespace std;

class Employee {
protected:
    string emp_name;
    string emp_id;
    float basic_salary;

public:
    Employee(string name, string id, float salary) {
        emp_name = name;
        emp_id = id;
        basic_salary = salary;
    }
};

class Salary : public Employee {
public:
    Salary(string name, string id, float salary) : Employee(name, id, salary) {}

    float calculate_gross_pay() {
        float hra = 0.20 * basic_salary; // HRA = 20% of basic salary
        float da = 0.50 * basic_salary;  // DA = 50% of basic salary
        float gross_pay = basic_salary + hra + da;
        return gross_pay;
    }

    float calculate_net_pay() {
        float gross_pay = calculate_gross_pay();
        float tax = 0.10 * gross_pay; // Tax = 10% of gross pay
        float net_pay = gross_pay - tax;
        return net_pay;
    }

    void display() {
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Gross Pay: " << calculate_gross_pay() << endl;
        cout << "Net Pay: " << calculate_net_pay() << endl;
    }
};

int main() {
    Salary emp1("John Doe", "E123", 50000);
    emp1.display();
}

