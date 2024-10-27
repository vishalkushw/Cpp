/*
#include <iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};	
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,5,8,9};
	int n = sizeof(arr)/4;	
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter arry size";
	cin>>n;
	int arr[n];	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
*/
/*
// print the addres of array
#include <iostream>
using namespace std;
int main(){
	int arr[4]={1,2,3,4};
	cout<<&arr[0]<<endl;
	cout<<&arr[1]<<endl;
	cout<<&arr[2]<<endl;
	cout<<&arr[3];
}
*/
/*

*/
/*
#include <iostream>
using namespace std;
int main(){
	int arr[5];	

	for(int i=0;i<5;i++){
		cout<<"Enter your array index : "<<i <<": ";
		cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<"Your array index : "<<i <<": ";
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	
		for(int i=4;i>=0;i--){
		cout<<"Your array index : "<<i <<": ";
		cout<<arr[i]<<endl;
	}
	
	
}
*/

/*
// add all array element 
#include <iostream>
using namespace std;
int main(){
	int arr[6]={1,2,3,4,5,6};
	int sum=0;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
		
	}
	cout<<endl;
	cout<<"sum of all array element is : "<<sum;
}

*/
/*
//product of all array element
#include <iostream>
using namespace std;
int main(){
	int arr[6]={1,2,3,4,5,6};
	int product=1;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
		product=product*arr[i];
		
	}
	cout<<endl;
	cout<<"product of all array element is : "<<product;
}
*/
/*
//find the element n in the array .take array and n as input
#include <iostream>
using namespace std;
int main(){
	int arr[6]={1,2,3,4,5,6};

    int n;
    cout<<"enter your number :";
    cin>>n;
    bool flag=false;

	for(int i=0;i<6;i++){
		if(arr[i]==n){
			flag=true;
			break;
		}
	}
	
	if (flag==true){
		cout<<n<<" number is present ";
	}
	else{
		cout<<n<<" number is not present";
	}

}
*/
/*
//find the maximum/minimum value out  of all the elements in the array

#include <iostream>
using namespace std;
int main(){
	int arr[6]={1,2,3,4,33,6};
	int mini=arr[0];
	for(int i=0;i<6;i++){
		mini=min(mini,arr[i]);
		
	}
	cout<<mini;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int arr[6]={99,222,3,4,33,6};
	//int mx=arr[0]; 
	int mx=INT_MIN;
	for(int i=0;i<6;i++){
		mx=max(mx,arr[i]);
		
	}
	cout<<mx;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int arr[50],i;	
	for( i=0;i<50;i++);
	{
	    arr[i]=i;
		cout<<arr[i]<<endl;
   }
}
*/
#include <iostream>
using namespace std;
int main(){
	int arr[]={3,4,5,6,7};
	
	int n=sizeof(arr)/4	;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<n;i++)
	{
		arr1[i]=arr[n-1-i];
		cout<<arr1[i]<<" ";
   }
}




