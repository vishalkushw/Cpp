// mutimap
#include<iostream>
using namespace std;
#include<map>
int main()
{

    multimap<int,string>up;
    up.insert({102,"vishal"});
     up.insert({105,"ram"});
      up.insert({107,"pawan"});
        up.insert({102,"vishal"});
      for(auto p:up){
        cout<<p.first<<","<<p.second<<"\n";
      }
}
