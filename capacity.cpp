#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v; 
   v.push_back(6); 
   v.push_back(1); 
   v.push_back(9);
   v.push_back(10);
   v.push_back(6); 
   v.push_back(1); 
   v.push_back(9);
   v.push_back(10);
   v.push_back(9);
   v.push_back(10);
   v.push_back(12);
   v.push_back(6); 
   v.push_back(1); 
   v.push_back(9);
   v.push_back(10);
   v.push_back(6); 
   v.push_back(1); 
   v.push_back(9);
   v.push_back(10);
   v.push_back(9);
   v.push_back(10);
   v.push_back(12);

   cout<<"Size is :"<<v.size()<< endl;
   cout<<"capacity is :"<<v.capacity()<< endl;

   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();

   cout<<"Size is :"<<v.size()<< endl;
   cout<<"capacity is :"<<v.capacity()<< endl;

}
