// wriate a program read and write operation in a file abc.txtream

//#include <iostream>
//#include <fstream>    //file read and write
//using namespace std;
//int main(){
//	ofstream output;
////	output.open("abc.txt");
//	output.open("abc.txt",ios::out|ios::app);
//	
//	output<<"This is our content\n";
//	output<<"aaaaaaaaaaa";
//	output.close();
//	
//}

#include <iostream>
#include <fstream> 
#include <iomanip>

using namespace std;
int main(){
	
//	ofstream out;
//	string name,addres,choise;
//	out.open("abc.txt",ios::out|ios::trunc);
//	out<<"Name\t\tAddresh\n";
//	
//	while(1){
//	
//	cout<<"Enter name and addres:";
//	cin>>name>>addres;
//	out<<setw(20)<<name<<"\t\t"<<setw(20)<<addres<<"\n";
//	cout<<"type 'exit' for exit , other wise any character ";
//	cin>>choise;
//	if(choise=="exit") break;
//}
//
//cout<<"record insert";
//	
//	out.close();
//	
	ifstream input;
	string data;
	input.open("abc.txt");
	
//	getline(input,data)
//	cout<<data<<endl;

//while(getline(input,data)){
//	cout<<data<<endl;
//}

while(!input.eof()){    //eof() return 1 when encounter end
	getline(input,data);
	cout<<data<<endl;
}
	
}
