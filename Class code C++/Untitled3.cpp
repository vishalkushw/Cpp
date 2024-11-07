#include <iostream>
using namespace std;
int main(){
	string name;
	cout<<"enter your string : ";
	getline(cin,name);
	int size = name.size();
	
	for(int i=0;i<size;i++){
		
		if(islower(name[i])){
			name[i]=toupper(name[i]);
		}
		
	else if(isupper(name[i])){
			name[i]=tolower(name[i]);
		}
		
	}
	cout<<name;
}
