/*include<iostream>
using namespace std;
 int main()
{
	
	
	int main();
int i;
for(i=1;i<=10;i++);  // here for loop has no body because (;) end the for statement.
{
	cout<<i;        // 11 
}

}


#include<iostream>
using namespace std;
 int main()
{
    while(11) {
        cout << "This loop will run forever." << endl;
    }
}


#include<iostream>
using namespace std;
int main()
{
 
    // since parenthesis has a higher precedence and here comma works as a operator
    int num = (24 , 98 < 85);    //0
   
    cout << num << endl;
 
    return 0;
}
*/



#include<iostream>
using namespace std;
int main()
{

	int i = 0, j = 0;
		if(i == j++)
			cout<< i<< j--;
		else
			cout<<i<<j;
		return 0;
}




