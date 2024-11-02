//#include <iostream>
//using namespace std;
//int main(){
//	int arr[5]={1,2,3,4,5};
//	
////	for(int i=0;i<5;i++){
////		cin>>arr[i];
////	}
//	
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//
//// display array
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter your range : ";
//	cin>>n;
//	
//	int arr[n]; 
//	
//	for(int i=0;i<n;i++){
//		cout<<"arr index of "<<i<<" ";
//		cin>>arr[i];
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++){	
//		cout<<"arr index of "<<i<<":"<<arr[i]<<endl;
//	}
//}

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your range : ";
	cin>>n;
	
	int arr[n]; 
	
	for(int i=0;i<n;i++){
		cout<<"arr index of "<<i<<" ";
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=n-1;i>=0;i--){	
		cout<<"arr index of "<<i<<":"<<arr[i]<<endl;
	}
}



