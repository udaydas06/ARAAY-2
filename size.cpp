#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,5,6,777,8,9,0,5,4,56,34,90,76,54};
    // int size = sizeof(arr)/4;  // 4 means 4 bytes for each integer element 
     int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<"size of the array "<<"="<<size;
}
