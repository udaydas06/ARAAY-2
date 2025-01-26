#include<iostream>
using namespace std;
int main()
 {
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter the number :";

    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0 ;i<=n-1;i++){
        sum = sum+ arr[i];
    }
    cout<<sum;
     
    //  int n ;       TO TAKE INPUT AND PRINT OUTPUT OF THE ARRAY
    //  cout<<"Enter the size of the array :";
    //  cin>>n;

    // INPUT
    //  int arr[n];
    // cout<<"Enter the numbers you wish to store in the array :";
    //  for(int i=0;i<=n-1;i++){
    //     cin>>arr[i];
    // OUTPUT
    //  }     
    //  for(int i=0; i<=n-1;i++){
    //     cout<<arr[i]<<" ";
    //  }
     


}
