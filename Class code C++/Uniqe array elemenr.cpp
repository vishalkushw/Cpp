#include <iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"enter 5 records";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"\n Result of unique values\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				break;
			}
		}
		if(i==j){
			cout<<arr[i]<<"t";
		}
	}
}
