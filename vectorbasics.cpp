#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v; // you need not mention the size in vector
   // inserting /input do not use  [] 
   v.push_back(6); // push back array ke size ko zero banake 1 bana dega or element (6) ko insert kar dega
   cout<<v.capacity()<<endl;
   v.push_back(1); // cureent size ko double kar deta hai
   cout<<v.capacity()<<endl; 
   v.push_back(9);
   cout<<v.capacity()<<endl;
   v.push_back(10);
   cout<<v.capacity()<<endl; 
   

    // if you want to update / access
   // v[0]= 79;
   // cout<<v[0]<<" ";
   // cout<<v[1]<<" ";
   // cout<<v[2]<<" "; 
   // cout<<v[3]<<" "; 
  


}