#include <iostream>
using namespace std;

bool palindrom(string s ,int lower ,int upper){
	if(lower>upper)
	return true;
	
	else if (s[lower]!=s[upper])
	return false;
	
	else
	return palindrom(s,lower+1,upper-1);
}

int main(){
	cout<<palindrom("nitin",0,4);
}
