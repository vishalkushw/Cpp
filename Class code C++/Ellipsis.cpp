ni#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char choice = 'y';

    while (choice == 'y') {
        try {
            cout << "Enter two Numbers: ";
            cin >> num1 >> num2;

            if (num1 + num2 > 100) {
                throw num1+num2;
            }

            cout << "Sum: " << num1 + num2 << endl;

            cout << "Do you want to continue  'y' or 'e' : ";
            cin >> choice;

            if (choice != 'y' && choice != 'e') {
                throw choice;
            }
        }
    
        catch (...) {
            cout << "EXCEPTION: ";
        }
    }
}

