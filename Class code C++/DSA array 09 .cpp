//#include <iostream>
//using namespace std;
//int main(){
//	int arr[]={2,3,1,5,6};
//	int size=sizeof(arr)/sizeof(int);
//	int small=arr[0];
//	for(int i=0;i<size;i++){
//		if (arr[i]<small){
//			small=arr[i];
//		}
//		
//	}
//	cout<<small;
//}

//#include <iostream>
//using namespace std;
//void changearr(int arr[],int size){
//
//	for(int i=0;i<size;i++){
//		arr[i]=2*arr[i];
//	}
//}
//int main(){
//	int arr[5]={2,3,1,5,6};
//	int size=sizeof(arr)/sizeof(int);
//	changearr(arr,5);
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}

#include <iostream>
using namespace std;

int linearSearch(int arr[],int s2,int target){

	for(int i=0;i<s2;i++){
		if(arr[i]==target){
			return 1;
		}
	}
	return -1;
}
int main(){
	int arr[]={2,3,1,5,6};
	int s2=5;
	int target=1;
	cout<<linearSearch(arr,s2,target)<<endl;
	return 0;
}
