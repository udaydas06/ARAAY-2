#include<iostream>
#include<climits> // INT_MAX or INT_MIN jab bhi use karengetab hum #include<climits> ka use karenge
using namespace std;
int main()
 {
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    
    int arr[n];
    //input
    cout<<"Enter the elements :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // int max = arr[0];
    int max = INT_MIN;
    for(int i =0; i<=n-1;i++){
    if(max<arr[i]) max = arr[i];

 }
 cout<<max;
 }
    