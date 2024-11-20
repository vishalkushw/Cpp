
// 01 display number in aaary
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n : ";
	cin>>n;
	int marks[n];
	
	for(int i=0; i<n; i++){
		cout<<"enter marks of student stored at  index "<<i<<":";
		cin>>marks[i];
	}
	
		for(int i=0; i<n; i++){
		cout<<"marks of student stored at  index "<<i<<":"<<marks[i]<<endl;
	}
}
/*
// 02  aray in reverse

#include <iostream>
using namespace std;
int main(){
	int n ,;
	cout<<"enter n : ";
	cin>>n;
	int marks[n];
	for(int i=0; i<n; i++){
		cout<<"enter marks of student stored at  index "<<i<<":";
		cin>>marks[i];
	}
	
		for(int i=n-1; i>=0; i--){
		cout<<"marks of student stored at  index "<<i<<":"<<marks[i]<<endl;
	}
}


// array of sum and average

#include <iostream>
using namespace std;
int main(){
	int n ,sum=0;
	cout<<"enter n : ";
	cin>>n;
	int marks[n];
	for(int i=0; i<n; i++){
		cout<<"enter marks of student stored at  index "<<i<<":";
		cin>>marks[i];
	}
	
		for(int i=0; i<n; i++){
	//	cout<<marks[i]<<endl;
		cout<<"marks of student stored at  index "<<i<<":"<<marks[i]<<endl;
		sum=sum + marks[i];
	}
	cout<<"add : "<<sum<<endl;
	cout<<"avarage : "<<sum/(float)n;
}

#include<iostream>
using namespace std;

int main() {
	int n ;
	cout<<"Enter your range : ";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>arr[i];
	}

    for(int i = 0; i < n; i++) {
        if(arr[i] % 7 == 0) {
            cout << arr[i] << " ";
        }
    }

}


*/
