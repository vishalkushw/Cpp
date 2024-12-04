/*
//01
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1; i<=n; i++){
		for (int j=1;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
//*
//* *
//* * *
//* * * *
//* * * * *


//02 
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=n ; i>=1; i--){
		for (int j=1;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//* * * * *
//* * * *
//* * *
//* *
//*



//03

//04
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1 ; i<=n; i++){
		for (int j=1;j<=i;j++){
			cout<<j <<" ";
		}
		cout<<endl;
	}
}

//1
//1 2
//1 2 3
//1 2 3 4 
//1 2 3 4 5


//05
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=n ; i>=1; i--){
		for (int j=1;j<=i;j++){
			cout<<i <<" ";
		}
		cout<<endl;
	}
}

//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1



//06
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=n ; i>=1; i--){
		for (int j=1;j<=i;j++){
			cout<<j <<" ";
		}
		cout<<endl;
	}
}

//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2 
//1


//07
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1 ; i<=n; i++){
		for (int j=1;j<=i;j++){
			cout<<i <<" ";
		}
		cout<<endl;
	}
}



//08
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1 ; i<=n; i++){
		for (int j=1;j<=i;j++){
			cout<<char(i+64) ;
		}
		cout<<endl;
		
	}
}

//A 
//B B
//C C C
//D D D D
//E  E  E  E  E


//09
#include <iostream>
using namespace std ;
int main(){
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1 ; i<=n; i++){
		for (int j=1;j<i;j++){
			cout<<char(j+64) ;
		}
		cout<<endl;
		
	}
}

//A 
//A B
//A B C
//A B C D
//A B C D E




#include <iostream>
using namespace std ;
int main(){                            //main  1
                
	int n;
	cout <<" enter number : ";
	cin>>n;
	
	for ( int i=1 ; i<=n; i++){         // outer 2
		for (int j=1;j<i;j++){           // inner 1
			cout<<"*" ;
		}
		cout<<endl;
		
	}
}

//10



#include <iostream>
using namespace std ;
int main(){
    int star =1;
	
	for ( int i=5 ; i>=1; i--){
		for (int j=1;j<=i;j++){
			cout<<" " ;        //space 
		}
		for(int k=1;k<=star;k++){   //star 
			cout<<"*";
		}
		cout<<endl;
		star=star+2;	
	}
}
//
//      * 
//     ***
//    *****
//   *******

*/


#include <iostream>
using namespace std ;
int main(){
    int star =1;
	
	for ( int i=5 ; i>=1; i--){
		for (int j=1;j<=i;j++){
			
			
			cout<<" " ;        //space 
		}
		for(int k=1;k<=star;k++){   //star 
		
		if(i==1 || k==1 ||k==star)
			cout<<"*";
		else{
			cout<<" ";
		}	
		}
		cout<<endl;
		star=star+2;
		
	}
}

//      * 
//     * *
//    *   *
//   *******
