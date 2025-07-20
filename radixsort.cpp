#include<iostream>
using namespace std;
int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void countSort(int arr[],int n,int pos){
    int count[10]={0};
    int b[n];
    for(int i=0;i<n;i++){
        ++count[(arr[i]/pos)%10];
    }
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void radixSort(int arr[],int n){
    int max = getMax(arr,n);
    for(int pos=1;max/pos;pos=pos*10){
        countSort(arr,n,pos);
    }
}
int main(){
    int arr[]={432,8,530,90,231,11,45,677,199};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Original array:"<<endl;
    printArray(arr,n);
    radixSort(arr,n);
    cout<<"Sorted array:"<<endl;
    printArray(arr,n);
    return 0;
}