#include<iostream>
using namespace std;
int linearsearch(int arr[],int index,int x,int n){

    if(index == n){
        return 0;
    }

    if(arr[index]==x){
        return index;
    }
    return linearsearch(arr,index+1,x,n);
}
int main(){
  
    int arr[] = {2,4,7,3,11,8,12};
    int n = sizeof(arr[0])/sizeof(arr);
      int x;
      
    cin>>x;
    cout<<linearsearch(arr,0,x,7);
}
