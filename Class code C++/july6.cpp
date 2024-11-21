/*
#include <iostream>
using namespace std;
int main(){
	int n,temp,i=0;
	cout<<"enter your limit : ";
	cin>>n;
	int arr[n];
	
	while(i<n){
		cout<<"enter number : ";
		cin>>temp;
		if(temp%2==0){
		arr[i]=temp;
		i++;
		}
	}
	
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
}

*/

#include <iostream>
using namespace std;
int main(){
	int arr[5]={0,1,0,3,12};    //two pointer method
	int j=0;
	for(int i=0; i<5;i++){
		
		if(arr[i]!=0){
			arr[j]=arr[i];
			j++;
		}
	}
	while(j<5){
		arr[j]=0;
		j++;
	}
	for(int i=0;i<5;i++){
	
	cout<<arr[i]<<" ";
}
}
