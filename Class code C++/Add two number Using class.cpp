// Given two numbers A and B. Your task is to return the sum of A and B.

#include<iostream> 
using namespace std; 

class Solution{   
public:
    int addition(int A, int B){
        return A+B;
    }
};
int main() 
{ 
   int n;
   cin>>n;
   int A, B;
   cin >> A >> B;
   Solution obj;
   cout << obj.addition(A,B) << endl;
} 

