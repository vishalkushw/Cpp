/*
#include <iostream>
using namespace std;
int main(){
	int num=20;
	
	int *numptr=&num;
	
	cout<<"address of num : "<<numptr<<endl;
	cout<<"value of num : "<<*numptr<<endl;
	
	*numptr=30;
	cout<<"change value of num : "<<*numptr<<endl;
	
	numptr++;
	cout<<"change address of num : "<<numptr<<endl;
	
	numptr--;
	cout<<"change address of num : "<<numptr<<endl;
	
	numptr--;
	cout<<"change address of num : "<<numptr<<endl;
	
}

*/
/*
// Array pointer 

#include <iostream>
using namespace std;
int main(){
	int arr[]={23,44,55,66};
	 // cout<< *arr<<endl;
	int *arrptr= arr;
	for(int i=0;i<4;i++){
//	cout<<*arrptr<<endl;
	cout<<*(arr+i)<<endl;
	  arrptr++;
	  
  }
}
*/

#include <iostream>
using namespace std;
int main(){
	int num=20;
	int *p;
	p=&num;
	cout<<p<<endl;
	cout<<&num;

}
