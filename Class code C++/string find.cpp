#include <iostream>
using namespace std;
int main(){
	string str = "apple";
	int index= str.find('a');
	cout<<index;
	
	index=str.find('a',index+1);
	cout<<index;
}
