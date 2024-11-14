#include <iostream>
using namespace std;
void tabal(int a ,int b=1){
	
	if(b>10){
		return;
	}
	cout<<a*b<<"\n";
//	tabal(a,b=b+1);
	tabal(a,b+1);
//	tabal(a,++b);
	
  
}

int main(){   
int n;
cout<<"Enter a number : ";
cin>>n;                       
tabal(n);
}	
