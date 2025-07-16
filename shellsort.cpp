#include<iostream>
using namespace std;
void shellsort(int *a,int n){
    for(int gap=n/2;gap>=1;gap=gap/2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i=i-gap){
                if(a[i+gap]>a[i]){
                    break;
                }
                else{
                    swap(a[i+gap],a[i]);
                }

            }
        }
    }
}
int main(){
    int arr[]={23,29,15,31,19,7,9,5,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The original array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    shellsort(arr,n);
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}