#include<iostream>
using namespace std;
void func(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    func(n-1);
}
int main(){
    int n;
    cin>>n;
    func(n);
}