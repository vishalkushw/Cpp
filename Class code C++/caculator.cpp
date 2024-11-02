#include<iostream>
using namespace std;
 
int main()
  {
    double num1,num2;
    int choice;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;

    cout << "********Enter your choice*********"<<endl;
    cout << "Press 1 to calculate Sum "<<endl;
    cout << "Press 2 to calculate Difference "<<endl;
    cout << "Press 3 to calculate Product "<<endl;
    cout << "Press 4 to calculate Division "<<endl;
    cout << "Press 5 to exit "<<endl;
    cin>>choice;
    
    switch (choice){
	
    case 1: {
        cout << "Sum is " << (num1 + num2) <<endl;
        break;
    }
    case 2: {
        cout << "Difference is " << (num1 - num2) << endl;
        break;
    }
    case 3: {
        cout << "Product is " << (num1 * num2) << endl;
        break;
    }
    case 4: {
        cout << "Division is " << (num1 / num2) << endl;
        break;
    }
    case 5: {
        cout << " Thank you try again"<<endl;
        break;
    }
    default:
        cout<<"Invalid choise"<<endl;
    }
}

    

