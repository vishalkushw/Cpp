#include <iostream>
using namespace std ;
int main(){
//	int arr[6]={2,3,4,5,6,7};

	int n;
	cout<<"enter n ";
	cin>>n;
	
	int mark[n];
	
	for(int i=0; i<n;i++){
		cout<<"enter number of index  "<<i <<" ";
		cin>>mark[i];
	}
		for(int i=0; i<n;i++){
		cout<<"enter number of index  "<<i <<" "<<mark[i]<<endl;
	}
	
}
