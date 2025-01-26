#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<"\n ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
 display(v);

}