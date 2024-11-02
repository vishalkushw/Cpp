//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter array length : ";
//	cin>>n;
//	
//	int arr[n];
//	
//	for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":";
//		cin>>arr[i];
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":"<<arr[i]<<endl;
//	}
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter array length : ";
//	cin>>n;
//	
//	int arr[n];
//	int sum=0;
//	
//	for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":";
//		cin>>arr[i];
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		sum+=arr[i];
//	}
//	cout<<"array sum of all eliment : "<<sum<<endl;
//}

//
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter array length : ";
//	cin>>n;
//	
//	int arr[n];
//	int sum=0;
//	
//	for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":";
//		cin>>arr[i];
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		sum+=arr[i];
//	}
//	cout<<"array average of all eliment : "<<sum/(float)n<<endl;
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter array length : ";
//	cin>>n;
//	
//	int arr[n];
//	int sum=1;
//	
//	for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":";
//		cin>>arr[i];
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//		sum*=arr[i];
//	}
//	cout<<"array product of all eliment : "<<sum<<endl;
//}

//
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter array length : ";
//	cin>>n;
//	
//	int arr[n];
//	int sum=0;
//	
//	for(int i=0;i<n;i++){
//		cout<<"array index of "<<i<<":";
//		cin>>arr[i];
//	}
//	cout<<endl;
//		for(int i=0;i<n;i++){
//			if(arr[i]%7==0){
//		//	sum+=arr[i];
//			cout<<"array sum odd of all eliment : "<<arr[i]<<endl;
//			}
//	
//	}
//	
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int marks[8]={37,44,5,67,87,36,23,39};
//	int n=8;
//	for (int i=0;i<n;i++){
//		cout<<marks[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<n;i++){
//		if(marks[i]<40){
//			cout<<"failed student index "<<i<<" :"<<marks[i]<<endl;
//		}
//	}
//	
//	for(int i=0;i<n; i++){
//		cout<<marks[i]<<" ";
//	}
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int arr[5]={2,1,65,6,9};
//	int high=arr[0];
//	
//	for(int i=0; i<5;i++){
//		if(arr[i]>high){
//			high=arr[i];
//		}
//	}
//	cout<<high;
//}


//#include <iostream>
//using namespace std ;
//int main(){
//	int arr[3][3]={1,7,3,4,9,6,5,6,7};
//	arr[2][1]=40;
//	int n = sizeof(arr)/4;
//	cout<<n<<endl; 
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++)
//		{
//		cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//		
//	}
//}

//
//#include <iostream>
//using namespace std ;
//int main(){
//	int arr[3][3]={{1,7,3},{4,9,6},{5,6,7}};
//	int sum=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++)
//		{
//		cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;	
//	}
//	
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++)
//		{
//		sum+=arr[i][j];
//	
//		}
//	}
//	cout<<sum;
//}
//

//
//#include <iostream>
//using namespace std;
//int main(){
//	string s="vishal kushwah";
//	
//	 int size=s.length();
//	 cout<<size;
//	 
//	 for (int i=0 ;i<s.length();i++){
//	   if (s[i]=='h'){
//	   s[i]='$';
//	 }
//}
//	 	cout<<s;
//	 	cout<<s.length();
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int arr[5]={2,1,65,6,9};
//	int mx=arr[0];
//	 mx=INT_MIN;
//	
//	for(int i=0; i<5;i++){
//		mx=max(mx,arr[i]);
//		}
//		cout<<mx;
//	}
	
#include <iostream>
using namespace std;
int main(){
	int arr[5]={2,1,65,6,9};
	int mn=arr[0];
	 mn=INT_MAX;
	
	for(int i=0; i<5;i++){
		mn=min(mn,arr[i]);
		}
		cout<<mn;
		
	}
	


