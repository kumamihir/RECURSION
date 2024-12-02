#include<iostream>
using namespace std;
void print1(int n,int a){
    if(n==a){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    print1(n+1,a);


}
int main(){
    int a=5;
    print1(1,a);
}