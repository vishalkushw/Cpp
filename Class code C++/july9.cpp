
/*
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double base, exponent, result;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result;

}


#include <iostream>
using namespace std;
int main(){
	int num ,sum=0,temp,rem;
	cout<<"enrer number ";
	cin>>num;
	
	temp=num;
	while(num>0){
		rem =num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	
	cout<<sum;
}


#include<iostream>
using namespace std;

int main() {
    int count = 0;
    int sum = 0;

    for(int i = 100; i <= 200; i++) {
        if(i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    cout << "Number of integers divisible by 9: " << count << endl;
    cout << "Sum of integers divisible by 9: " << sum << endl;

    
}

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n > 0) {
        for(int i = 0; i < n; i++) {
            cout << "repeat" << endl;
        }
    } else if(n < 0) {
        cout << "over" << endl;
    } else {
        cout << "Neither repeat nor over" << endl;
    }


}


#include <iostream>
using namespace std;
int main(){
	int num ,sum=0,temp,rem;
	cout<<"enter number ";
	cin>>num;
	
	temp=num;
	while(num>0){
		rem =num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(temp==sum){
	
	cout<<"palindrom number ";
}

else{
	cout<<"not palindrom";
}
}

*/

#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a set of integers (enter -1 to stop):" << endl;

    while(true) {
        cin >> num;
        if(num == -1) {
            break;
        }
        if(num % 10 == 0) {
            cout << num << endl;
        }
    }


}

