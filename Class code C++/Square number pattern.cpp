//Dsa patterns

//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

// star square pattern
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		char ch='A';
//		for(int j=1;j<=n;j++){
//			cout<<ch<<" ";
//			ch=ch+1;
//		}
//		cout<<endl;
//	}
//	
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	int num=1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<num<<" ";
//			num++;
//		}
//		cout<<endl;
//	}
//	
//}

// star tringle 
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<"*"<<" ";
//		}
//		cout<<endl;
//	}
//	
//}
// number tringle 
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	
//	for(int i=1;i<=n;i++){
//		for(int j=i;j>=1;j--){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

 // floyd number tringle 
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter number :";
//	cin>>n;
//	int num=1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<num<<" ";
//			n++;
//		}
//		cout<<endl;
//	}
//	
//}

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number :";
	cin>>n;
	int num=1;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j++){
			cout<<" ";
	}
		for(int j=1;j<=i;j++){
			cout<<i;
			
		}
		cout<<endl;
	}
	
}
