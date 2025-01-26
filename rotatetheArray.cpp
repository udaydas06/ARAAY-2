// Rotate the given array 'a' by k steps , where k is non-negative.
//Note:k can be greater than n as well where n is the size of array 'a'.
#include<iostream>
#include<vector>
using namespace std;

// Function to display an vector or array
void display(vector<int> &a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// function to reverse any part of the given array
void reversePart(int i ,int j , vector<int>& v){
      while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;

      }
      return;
}
int main()

{
   
  
  vector<int>v;
  v.push_back(1);
  v.push_back(6);
  v.push_back(2);
  v.push_back(3);
  v.push_back(7);
  v.push_back(4);
  v.push_back(8);
  int k = 20;
  int n = v.size();
  if(k>n) k = k % n;

  display(v);
  // rotate
 reversePart(0,n-k-1, v);
 reversePart(n-k,n-1 , v);
 reversePart(0,n-1, v);

  display(v);
  

  
}