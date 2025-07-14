#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k = lb;
    int b[ub+1];
    while(i<=mid && j<=ub){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=ub){
        b[k]=a[j];
        k++;
        j++;
    }
    for(int l=lb;l<=ub;l++){
        a[l]=b[l];
    }
}

void mergeSort(int a[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int arr[]={10,5,6,7,8,12,4,9,1};
    int n= sizeof(arr)/sizeof(int);
    cout<<"The original array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}