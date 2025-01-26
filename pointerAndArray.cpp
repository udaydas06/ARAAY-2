#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr; // giving address
    cout<<ptr<<endl;
    // ptr[0] = 8;

    // first method to print array
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" "; // agar hum pointer ko array ke pehle element ka address de de to pointer ki
                            // puri aukat hai is pure array ko istemal karne ki

    }

    // second method to print array

cout<<endl;
    *ptr = 8; // ptr[0] = 8  has same meaning
    ptr++;
    *ptr = 9;
    ptr--;
    for(int i=0;i<=4;i++){
             cout<<ptr[i]<<" ";
    }

}