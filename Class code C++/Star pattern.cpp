#include <iostream>
using namespace std;
int main(){
	int num,num1;
	cout<<"Enter row :";
	cin>>num;
	cout<<"Enter columb : ";
	cin>>num1;
	
	for(int i=0;i<num;i++){
		for(int j=0;j<num1;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
}
