#include <iostream>
using namespace std;
int main (){
	int A[6]={93,45,22,11,77,66};
	
	int high,shigh,thigh;
	
	if(A[0]>A[1]){
		high=A[0];
		shigh=A[1];
		thigh=A[2];
	}
	
	else if(A[1]>A[0]){
		high=A[1];
		shigh=A[0];
		thigh=A[2];
	}

	else{
		high=A[2];
		shigh=A[0];
		thigh=A[1];
	}
	
	for(int i=3;i<6;i++){
		if(A[i]>high){
			thigh=shigh;
			shigh=high;
			high=A[i];
		}
		
		else if (A[i]>shigh&&A[i]!=high){
			thigh=shigh;
			shigh=A[i];
			
		}
		
		else if (A[i]>thigh&&A[i]!=high&&A[i]!=shigh){
			thigh=A[i];	
		}
		
	}
	
	cout<<"high"<<high<<endl;
	cout<<"shigh"<<shigh<<endl;
	cout<<"thigh"<<thigh<<endl;
	
}
