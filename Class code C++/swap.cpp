#include <iostream>
using namespace std;

int swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int a=10;
	int b=20;
	cout<<"before swap "<<a<<" "<<b;
	swap (a,b);
	cout<<"after swap "<<a<<" "<<b;
}
