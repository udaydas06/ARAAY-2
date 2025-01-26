#include<iostream>
using namespace std;
int main()
 {
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    
    int i;
    int arr[n];
    //input
    cout<<"Enter the elements :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the Element you want to search :";
    cin>>x;
    // search
    // check mark
    bool flag = false; // false means not present by default
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
         
    }
    if(flag == true) cout<<"Element is preent ";
    else cout<<"Element is not found";
 }