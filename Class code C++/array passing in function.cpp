#include <iostream>
using namespace std;

void show (int a[],int s){
	cout<<"copy Array\n";
	for(int i=0;i<s;i++){
		a[i]=a[i]+10;
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[]={20,34,44,22,21};
	int s=sizeof(arr)/sizeof(arr[0]);
	show(arr,s);
	cout<<"\n\nOriginal Array\n";
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
}
