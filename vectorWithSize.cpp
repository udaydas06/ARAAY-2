#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v; // initial size = 5, each element has value 7

   for(int i=0;i<5;i++){
       int x;
       cin>>x;
       v.push_back(x);

   }
   for(int i=0;i<5;i++){
      cout<<v[i]<<" ";
   }
  

}
