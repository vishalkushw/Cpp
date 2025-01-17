//2D array print 1 of all elements
// 11111
// 11111
// 11111
// 11111
// 11111

#include <iostream>
using namespace std;
int main(){
	int arr[5][5];

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j]=1;
		}		
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<arr[i][j];
		}	
		cout<<endl;	
	}
	
}
