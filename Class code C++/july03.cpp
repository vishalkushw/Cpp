//write a priogram finde the higest and second highest number in an arry
/*
#include <iostream>
using namespace std;
int main(){

	int A[6]={4,91,61,-3,120,5};
    int high=A[0];
	
	for (int i=1;i<6;i++){
		if(A[i]>high){
			high=A[i];
			
		}
		
	}
	cout<<high;

}


// lowest 
#include <iostream>
using namespace std;
int main(){

	int A[6]={4,91,61,-3,120,5};
    int low=A[0];
	
	for (int i=1;i<6;i++){
		if(A[i]<low){
			low=A[i];
			
		}
		
	}
	cout<<low;

}
*/

#include <iostream>
using namespace std;
int main(){

	int A[6]={45,66,29,56,322,11};
    int high,shigh;
    if(A[0]>A[1]){
    	high=A[0];
    	shigh=A[1];
	}
	else{
		high=A[1];
    	shigh=A[0];
	}
	
	for (int i=2;i<6;i++){
		if(A[i]>high){
			shigh=high;
			high=A[i];	
		}
		
	}
	cout<<"higest : "<<high<<endl;
	cout<<"shigh : "<<shigh;

}

