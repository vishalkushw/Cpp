//
/*
#include <iostream>
using namespace std;
int main(){
	
	int arr[8]={1,2,3,4,1,5,2,7};
	
	for(int i=0; i<8; i++){
	
	 bool uniq = false;
		for(int j=0;j<i;j++){
		   if(arr[i]==arr[j]){
			uniq=true;
			break;
          }
		}
		if(uniq==false){
		cout<<arr[i]<<" ";
	}
			
	
		
}
	
	}
	
*/	


#include <iostream>
using namespace std;
int main(){
	
	int arr[8]={34,56,23,34,4,24,56,9};
	int new_arr[8]={arr[0]};
	int i=1; bool found;
	
	
	
	for(int j=1; j<8; j++){
	
	     found = false;
		for(int k=0;k<i;k++){
		   if(arr[j]==arr[k]){
			found=true;
			break;
          }
		}
		if(found==false){
			new_arr[i]=arr[j];
		   i++;
	}
	
}
	for(int j=0; j<i;j++)	{
     	cout<<new_arr[j]<<" ";
}
	
	}




	
/*	

  //duplicate arry
#include <iostream>
using namespace std;
int main(){
	int arr1[8]={1,2,3,4,5,6,7,8};
	int arr2[8];
	   cout<<"arr1";
	for(int i=0; i<8;i++){
		arr2[i]=arr1[i];
		cout<<arr1[i];
	}
	cout<<"arr2 : ";
	for(int i=0;i<8;i++){
		cout<<arr2[i]<<" ";
	}
	
}


 // even arry 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of even elements: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = 2 * (i + 1);
    }

    cout << "Array with " << n << " even elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
*/
