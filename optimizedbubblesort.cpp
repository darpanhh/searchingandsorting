#include<iostream>
using namespace std;
int main(){
    int a[]={15,16,6,8,5};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);  
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}