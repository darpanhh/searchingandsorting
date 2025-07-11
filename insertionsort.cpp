#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,10,1,6,2};
    int n = sizeof(a)/sizeof(int);
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"The sorted array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}