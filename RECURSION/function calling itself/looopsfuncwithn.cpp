#include<iostream>
using namespace std;
void func(int n){
    if(n==0) return;
    cout<<"hello world"<<endl;
    func(n-1);
}
int main(){
    func(3);

}