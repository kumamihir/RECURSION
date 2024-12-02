#include<iostream>
using namespace std;
void printarr(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    printarr(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,7,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n,0);

}