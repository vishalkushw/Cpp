
//#include <iostream>
//using namespace std;
//int main(){
//	string str = "apple";
//	int index= str.find('a');
//	cout<<index;
//	
//	index=str.find('a',index+1);
//	cout<<index;
//}
/*
// write a program find out all the indices of particular caracter by user

#include <iostream>
using namespace std;
int main(){
	string str = "apple is very good for health";
	char ch = 'o';
	int index=-1;
	
	
	while(1){

	index=str.find(ch,index+1);
	if(index==-1)
	  break;
	cout<<index<<" ";
}
}


#include <iostream>
using namespace std;
int main(){
	
	
	string str = "apple is very good for health";
      str.erase(9,5);
     
	cout<<str;
}



#include <iostream>
using namespace std;
int main(){
	
	
	string str = "apple is very good for health";
      str.replace(14,4,"bad");
     
	cout<<str;
}



#include <iostream>
using namespace std;
int main(){
	
	
	string str = "apple is very good for health";
      str.replace(13,0," bad bad");
     
	cout<<str;
}
*/

#include <iostream>
using namespace std;
int main(){
	
	
	string str = "apple is very good for health";
      str[4]=toupper(str[4]);
     
	cout<<str;
}




