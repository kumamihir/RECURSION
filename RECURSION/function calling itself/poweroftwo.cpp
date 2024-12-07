#include<iostream>
using namespace std;
bool ispowerof(int n){
    //base case
    if(n==1) return true;
    if(n%2!=0 || n<=0) return false;
    return ispowerof(n/2);
}
int main(){
    int n;
    cout<<"Enter the Number : ";

    cin>>n;
    cout<<ispowerof(n);

}