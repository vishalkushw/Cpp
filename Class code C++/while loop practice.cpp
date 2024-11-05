#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number : ";
	cin>>n;
	int i=1;
	while(i<=100){
		n= n%7==0;
		cout<<n;
		i++;
	}
	cout<<n;
}
