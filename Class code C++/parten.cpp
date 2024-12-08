/*
// wrigth a program  to draw a partern

//01 star rectangle partern

#include <iostream>
 using namespace std;
 int main(){

	
	for(int i =1 ; i<=3; i++){ //row
		
		for(int j=1 ;j<=5;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}

*/
//02   star square partern 
#include <iostream>
 using namespace std;
 int main(){
 	int n,a;
    cout<<"enter number : ";
    cin>>n>>a;
	
	for(int i =1 ; i<=n; i++){ //row
		
		for(int j=1 ;j<=a;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}

/*
//03 rectangle
#include <iostream>
 using namespace std;
 int main(){
 	int n,a;
    cout<<"enter number : ";
    cin>>n;
	
	for(int i =1 ; i<=n; i++){ //row
		
		for(int j=1 ;j<=i;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}


#include <iostream>
 using namespace std;
 int main(){
 	int n,a;
    cout<<"enter number : ";
    cin>>n;
	
	for(int i =1 ; i<=n; i++){ //row
		
		for(int j=1 ;j<=n;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}


#include <iostream>
 using namespace std;
 int main(){
 	int n,a;
    cout<<"enter number : ";
    cin>>n;
	
	for(int i =1 ; i<=n; i++){ //row
		
		for(int j=1 ;j<=i;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}



/*
#include <iostream>
 using namespace std;
 int main(){
	int n;
	cout<<" enter number : ";
	cin>>n;
	
	for(int i =1 ; i<=n; i++){ //row
		
		for(int j=1 ;j<=n;j++){ //column
			cout<<"*";
		}
		cout<<endl;
	}
}

//n=4
//****
//****
//****
//****
*/
