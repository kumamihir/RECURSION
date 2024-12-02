#include<iostream>
using namespace std;



void fun(int n){
    if(n==0) return;
    cout<<"mihir"<<endl;
    fun(n-1);
}



int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}




int print(int n){
    if(n==1) return 1;
    cout<<n<<endl;
   return print(n-1);
}



void print1ton(int n){
    if(n==0) return;
    print1ton(n-1);
    cout<<n<<endl;

}



int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}


int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);

}

int fibonacci(int n){
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}


int power(int x,int n){
    if(n==1) return x;
    int ans=pow(x,n/2);
    return ans*ans;
}


int correctpow(int x,int n){
    if(n==1) return x;
    int ans=correctpow(x,n/2);
    if(n%2!=0){
        return x*ans*ans;
    }
    else{
        return ans*ans;
    }
}


int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    
    return stair(n-1)+stair(n-2);
}


int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    // fun(3);
    // cout<<factorial(0);
    // cout<<print(5)<<endl;
    // print1ton(5);
    cout<<sum(10);
    // cout<<pow(2,4);
    // cout<<fibonacci(11);
    // cout<<power(3,3);
    // cout<<correctpow(3,5);
    // cout<<stair(5);
    // cout<<maze(0,0,3,3);
}