// string  12/07/24
#include <iostream>
using namespace std ;
int main(){
	
    string name; 
	cout<<"enter your name ";
	cin>>name;

      int size=name.size();
      
      for( int i=0; i<size;i++){

      	if(name[i]=='+'){
      		name[i]='p';
		  }
		  
	  }
      
    cout<<name;

	}

/*
#include <iostream>
using namespace std ;
int main(){
       string name= "cpp is a powerful language";
       int count=0;
       int size=name.size();
      
      for( int i=0; i<size;i++){

      	if(name[i]==' '){
              count++;
		  }
		  
	  }
      
    cout<< count;

	}
	
	

#include <iostream>
using namespace std ;
int main(){
       string name= "cpp is a powerful language"; 
	   string name1 ="";
       int size=name.size();
       
      
      for( int i=0; i<size;i++){

      	if(name[i]==' '){
            continue;
        
		  }
		  name1 += name[i];
	  }
      
    cout<< name1;
    cout<<size;

	}
	
	*/
	
/*	
#include <iostream>
using namespace std;
int main(){
	string name = "Vishal kushwah";
	int size = name.size();
	
	cout<<name<<endl<<size;
}
*/


/*
#include <iostream>
using namespace std;
int main(){
	string name;
	cout<<"enter your string ";
	getline(cin ,name);
		
	int size=name.size();
	
	for(int i=0; i<size;i++){
		if(name[i]=='+'){
			name[i]='p';
			
		}
	}	
	cout<<name;
}

*/
/*
// count  space in string 
#include <iostream>
using namespace std;
int main(){
	string name = "Cpp is a power fullanguage";
	int count=0;
	int size = name.size();
	
	for(int i=0;i<size; i++){
		if(name[i]==' '){
			count++;
		}
	}
	cout<<count;
}

*/





//#include <iostream>
//using namespace std;
//int main(){
//	string name = "C++ is a powerful language";
//	int size=name.size();
//	
//	for(int i=0;i<size;i++){
//		if(name[i]==' '){
//			name[0]='"';
//			
//			name[i]= ;
//		}
//		
//	}
//	cout<<name;
//}
