#include<iostream>
using namespace std;
int binary(int arr[],int st,int end,int x){

    if(st>end){
        return 0;

    }
    int mid =st+(end-st)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
      return binary(arr,mid+1,end,x);
    }
    else{
           return binary(arr,st,mid-1,x);
    }

}
int main(){
    int arr[]={3,8,11,15,20,22};
    // int n=sizeof(arr[0])/sizeof(arr);
    int x;
    cin>>x;
    cout<<binary(arr,0,5,x);

}