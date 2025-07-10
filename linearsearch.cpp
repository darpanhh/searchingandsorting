#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int data;
    cout<<"Enter data which needs to be find: ";
    cin>>data;
    int found=0;
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            cout<<"Element found at index:"<<i<<endl;
            found = 1;
            break;
        }
    }
    if(i==n){
        cout<<"Element not found."<<endl;
    }
    return 0;
}