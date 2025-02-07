#include<iostream>
using namespace std;

int area(){
  int s;
  cout<<"Enter a side ";
  cin>>s;
 int area_sq=s*s;
 return area_sq;
}

int main(){
 int result=area();
 cout<<result;
}
