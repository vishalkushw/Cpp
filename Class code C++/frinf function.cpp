
#include <iostream>
using namespace std;

class Bank {
public:
    int balance;
    string name;

public:
    Bank(int bal, string nm) {
        balance = bal;
        name = nm;
    }

    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }

    friend Bank PhonePe(Bank obj, int amount);
};

Bank PhonePe(Bank obj, int amount) {
    obj.balance += amount;
    return obj;
}

class PhonePe {
public:
    void deposit(Bank &obj, int amount) {
        obj.balance += amount;
    }

    void withdraw(Bank &obj, int amount) {
        if (obj.balance >= amount) {
            obj.balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    Bank obj(40000, "vishal");
    obj.display();

    obj = PhonePe(obj, 6000);
    obj.display();

    PhonePe obj_phonepe;
    obj_phonepe.deposit(obj, 8000);
    obj.display();

    return 0;
}

