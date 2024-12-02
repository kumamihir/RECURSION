#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    cout<<s<<"->"<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main(){
    int n;
    cout<<"NO OF DISC'S : ";
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<endl;
    cout<<"MINIMUM MOVES REQUIRED : "<<pow(2,n)-1;
}