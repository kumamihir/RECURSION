#include<iostream>
#include<algorithm>
using namespace std;
void maxarr(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<"max in this array is : "<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    maxarr(arr,n,idx+1,max);
}
int main(){
    int arr[]={1,4,2,3,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxarr(arr,n,0,arr[0]);
}