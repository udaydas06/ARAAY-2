#include<iostream>
using namespace std;
void display(int a[] , int size){ // technically int a[] ek pointer hai jo ki array ki address ko recieve kar rha hai 
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){ // int *b ! // array pass by value nahi hota hai array pass by reference hota hai
    b[0] =100;
}

int main()


{
    int arr[] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements in another function
    // updation , pass by value / reference ?
    display(arr , size);
    change(arr , size);
    display(arr , size);
    cout<<size;

}