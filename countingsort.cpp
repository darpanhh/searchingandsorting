#include<iostream>
using namespace std;
void countingsort(int* arr,int n,int key){
    int b[n];
    int count[key+1]={0};
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    for(int i=1;i<=key;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int n=sizeof(arr)/sizeof(int);
    countingsort(arr,n,9);


    return 0;
}

