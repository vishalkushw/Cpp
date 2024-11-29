//create 1D array
/*
#include <iostream>
using namespace std ;
int main(){
	int arr[5]={1,2,3,4,5};
	
	for (int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
*/

//create 2D array
#include <iostream>
using namespace std ;
int main(){
	int arr[2][2];
	cout<<"Enter array element : ";
	for(int i=0;i<2;i++){
	   for(int j=0;j<2;j++){
	   	cin>>arr[i][j];
	   }
	}
	cout<<"Array element" <<endl;
	for(int i=0;i<2;i++){
	   for(int j=0;j<2;j++){
	   	cout<<arr[i][j]<<ends;
	   }
	   cout<<endl;
	}
}
