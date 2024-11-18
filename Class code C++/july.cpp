#include <iostream>
using namespace std;
int main(){
	int num ,fact=1;
	cout<<"enter number ";
	cin>>num;
	
	for(int i=num;i>=1;i++){
		
		if(num>0){
		
		fact=fact*i;
		
		if(num<0){
			fact=fact*i;
		}
		
	}
	
	}
	cout<<fact;
	cout<<  fact;
	
}
