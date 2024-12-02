#include<iostream>
using namespace std;

      void happybday(int n){

        if(n==0) {
        cout<<"congratulation happy birthday";
       }
        if(n==0) return ;
       
        cout<<n<<" "<<"day left for birthday"<<endl;
       happybday(n-1);
    }

  int main(){
      happybday(3);

  }

    
