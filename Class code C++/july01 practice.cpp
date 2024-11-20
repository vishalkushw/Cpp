/*
Q.1) WAP to create a array of n integer elements. And  perform following operations.
a) display

b) display in reverse order.

d)display elements which are multiple of 7

e) add them all and show result

f) find avg.


Q.2) WAP to find sum of all even element in an array.

Q.3) WAP to find sum of all odd element in an array.

Q.4) WAP to count all odd element in an array, and display result.

*/
/*
// 01 Q.1) WAP to create a array of n integer elements. And  perform following operations.

// a) display

#include <iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cout<<"enter your number of index "<<i<<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<"Number of index "<<i <<":" <<array[i]<<endl;
	}
	
}



// b) display in reverse order.

#include <iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=n-1;i>=0;i--){
		cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	}
}


//  c) display alternate elements from starting index.

#include <iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cout<<"enter your number of index "<<i<<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i=i+2){
		cout<<"Number of index "<<i <<":" <<array[i]<<endl;
	}
	
}

d)display elements which are multiple of 7



// e) add them all and show result
#include <iostream>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
//		cout<<array[i]<<endl;
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
		sum=sum+array[i];
	}
	cout<<"sum is :"<<sum;
}


// f) find avg.
#include <iostream>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
//		cout<<array[i]<<endl;
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
		sum=sum+array[i];
	}
	cout<<"Avarage of "<<n <<" number is : "<<sum/(float)n;
}


// 02 WAP to find sum of all even element in an array.

#include <iostream>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	    if(array[i] % 2==0){
		
		sum=sum+array[i];
	 }
	}
	cout<<"Even sum is :"<<sum;
}



// 03 WAP to find sum of all odd element in an array.

#include <iostream>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	    if(array[i] % 2 ==1){
		
		sum=sum+array[i];
	 }
	}
	cout<<"Odd sum is :"<<sum;
}

// 04 WAP to count all odd element in an array, and display result.

#include <iostream>
using namespace std ;
int main(){
	int n ,count=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	    if(array[i] % 2 ==1){
		
		count++;
	 }
	}
	cout<<"odd number count is :"<<count;
}

*/



//d)display elements which are multiple of 7


#include <iostream>
using namespace std ;
int main(){
	int n ;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	
	}
	for(int i=0;i<n;i++){
	    if(array[i] % 7==0){
	    	
        cout<<array[i]<<" ";
	}
		
}
  
}

