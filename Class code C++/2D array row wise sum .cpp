//2D array row wise sum

#include <iostream>
using namespace std;
int main(){
	int arr[3][3]={1,5,1,2,6,9,1,11,2};
	int sum;
	for(int i=0;i<3;i++){
		sum=0;
		
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			sum=sum+arr[i][j];
		}
		cout<<"-------->"<<sum<<endl;
	}
}


