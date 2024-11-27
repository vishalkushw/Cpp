//pointer 
#include <iostream>
using namespace std;
int main(){
	int number=90;
	double marks=30.6;
	char choice='t';
	
	int *p1= &number;    //* astrick (indirection ,dereference)
	double *p2= &marks;  //& ampersand (address of)
//	cout<<sizeof(p1)<<" "<<sizeof(p2);
    cout<<"address of number : "<<&number<<" or "<<p1<<endl;
    //dereference
    *p1=*p1+10;
    cout<<"data at number : "<<number<<" "<<*p1;
    
}
