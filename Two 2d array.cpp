#include<iostream>
using namespace std;
int main(){ 
    int arr1[2][3]={1,2,5,6,7,5};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
         cout<<arr1[i][j]<<" ";
        }
    }
}
