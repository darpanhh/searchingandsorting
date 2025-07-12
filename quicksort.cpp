#include<iostream>
using namespace std;
int partition(int *arr,int n,int lb,int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}
void Quicksort(int *arr,int n,int lb,int ub){
    if(lb<ub){
        int loc =partition(arr,n,lb,ub);
        Quicksort(arr,n,lb,loc-1);
        Quicksort(arr,n,loc+1,ub); 
    }
}
int main(){
    int arr[]={5,6,10,8,2,9,14};
    int n= sizeof(arr)/sizeof(int);
    Quicksort(arr,n,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}