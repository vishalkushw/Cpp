

#include <iostream>
using namespace std;
int main(){
	string name[5]={"ajay","vishal" ,"rohit","nitin","gautam"};
	string key;
	bool found = false;
	cout<<"enter key : ";
	cin>>key;
	
	for(int i=0; i<5; i++){
		if(name[i]==key){
			cout<<"key present at index "<<i<<endl;
			found=true;
		}
	}
	
	if(found==false){
		cout<<"result: not found";
	}
	else{
		cout<<"result : found";
	}
}


