#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
   vector<int> v; 
   v.push_back(9);
   v.push_back(10);
   v.push_back(6); 
   v.push_back(1); 
   
   //cout<<v.at(3); // At function
   for(int i = 0;i<v.size();i++){
    cout<<v.at(1)<<" ";
   }
   cout<<endl;

   //sort
   sort(v.begin(),v.end());
   for(int i = 0;i<v.size();i++){
    cout<<v.at(1)<<" ";
   }
   cout<<endl;



}
