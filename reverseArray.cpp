//Write a program to reverse the element of an array without using another array
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

  display(v);
  // reverse
//   int i = 0;
//   int j = v.size()-1;
//   while(i<=j){
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
//     i++;
//     j--;
//   }
//    for(int i = 0,j = v.size()-1;i<=j ; i++,j--){
//    int temp = v[i];
//    v[i] = v[j];
//    v[j] = temp;
//    }
 reversePart(0,4 , v);

  display(v);
  

  
}
