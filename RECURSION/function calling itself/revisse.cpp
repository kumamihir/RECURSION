// #include <iostream>
// using namespace std;
// int printnto1(int n)
// {
//     if (n == 1)
//         return 1;

//     cout << n << endl;
//     return printnto1(n - 1);
// }
// int main()
// {
//     cout << printnto1(5) << endl;
// }

#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
// void print1ton(int n){
//     if(n==0) return ;
//     print1ton(n-1);
//     cout<<n<<endl;
   



// }
int main(){
    sum(5);
}