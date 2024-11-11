/*
#include <iostream>
using namespace std;
int main(){
	string name;
	cout<<"enter your string : ";
	getline(cin,name);
	cout<<name<<endl;  
	cout<<name.size();
	
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	string name ="vishal kushwah \"wardha\"";
	cout<<name;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	char name[]="vishal kushwah";
	cout<<name;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	char name[]="vishal kus\0hwah";
	cout<<name;
}
*/
/*
// use of append
#include <iostream>
using namespace std;
int main(){
	string name1="vishal ";
	string name2="kushwah";
	
	name1.append(name2);
	cout<<name1;
}
*/
/*
// use of push_back()
#include <iostream>
using namespace std;
int main(){
	string name1="vishal kushwah";
	name1.push_back('a');
	cout<<name1;
}
*/
/*
// use concate + add two string
#include <iostream>
using namespace std;
int main(){
	string name1="vishal kushwah ";
	string name2="vishal kushwah ";
	cout<<name1+name2+'a';
}
*/
/*
// reverse string
#include <iostream>
using namespace std;
int main(){
	string name="vishal ";
	int start=0 ,end=name.size()-1;
	cout<<"original string : " <<name <<endl;
	
	while(start<end){
		swap(name[start],name[end]);
		start++ , end--;
	}
	
	cout<<"Revers of string :" <<name <<endl;
	
	cout<<"size of name : "<<name.size();
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	string name1="vishal kushwah";
		name1 = string(name1.rbegin(), name1.rend());
	cout<<name1;
}
*/
/*
//WAP to manipulate the string as given
//input: "c++ is a powerful language"
//output: "cpp is a powerful language"

#include <iostream>
using namespace std;
int main(){
	string name="c++ is a powerful language";
	int size=name.size();
	for(int i=0;i<size;i++){
	
	if(name[i]=='+'){
		name[i]='p';
	}
	cout<<name[i];
  }
}
*/
/*
//WAP to count number of space in the string str given below
//str= "cpp is a powerful language"
//output: 4

#include <iostream>
using namespace std;
int main(){
	string name="cpp is a powerful language";
	int count=0;
	int size = name.size();
	
	for(int i=0;i<size;i++){
		if(name[i]==' '){
			count++;
		}
	}
	cout<<count;
}
*/
/*
//WAP to create a new string with the help of old string str given below
//such that it does not contain any space.
//str= "cpp is a powerful language"
//str2="cppisapowerfullanguage"

#include <iostream>
using namespace std;
int main(){
	string name1="cpp is a powerful language";
	string name2;
	int size = name1.size();
	
	for(int i=0;i<size;i++){
		if(name1[i]==' '){
			continue;
	}
	name2+=name1[i];
		
	}
	cout<<name2;
}

// use of find
#include <iostream>
using namespace std;
int main(){
	string name1="vishal kushwah";
	int	index=name1.find('k');
	cout<<index;
}
*/  
//use of erase
#include <iostream>
#include <string>
using namespace std;
int main(){
	string name1="vishal kushwah";
//	name1.erase(1,4);
	cout<<name1;
}


